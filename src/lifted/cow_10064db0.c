/* f_0x10064db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10064db0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_718;
    uint32_t loc_71c;
    uint32_t loc_730;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1852u);

    wr32(sp0 - 0x720u, in_ebx);
    wr32(sp0 - 0x724u, in_ebp);
    wr32(sp0 - 0x728u, in_esi);
    wr32(sp0 - 0x714u, self);
    wr32(sp0 - 0x72cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x72cu;
    cow_thiscall(g, COW_IMG(0x1006b7a0u), sp0 - 0x710u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x730u, 0x1000u);
    wr32(sp0 - 0x734u, 1u);
    wr32(sp0 - 0x738u, arg1);
    t2 = cow_fastcall(g, COW_IMG(0x1006b7c0u), sp0 - 0x710u, t1, 3, arg1, 1u, 0x1000u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        edx = t4;
        goto L_10064e09;
    }
    ecx = t3;
    edx = t4;
    wr32(sp0 - 0x730u, arg1);
    wr32(sp0 - 0x734u, COW_IMG(0x10353ad8u));
    g->esp = sp0 - 0x72cu;
    t5 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353ad8u), arg1);
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x1006b7b0u), sp0 - 0x710u, t6, 0);
    return t7 & 0xffffff00u;
L_10064e09: ;
    wr32(sp0 - 0x718u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t8 = g->edx;
    wr32(sp0 - 0x730u, 0u);
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x710u, 1, 0u);
    t10 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        edx = t10;
        edi = in_edi;
        goto L_1006521f;
    }
    edx = t10;
    edi = in_edi;
L_10064e30: ;
    t11 = rd32(sp0 - 0x70cu);
    wr32(sp0 - 0x730u, t11);
    g->eax = t11;
    g->esp = sp0 - 0x72cu;
    t12 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, edx, 1, t11);
    t13 = g->edx;
    if (t12 == 0u)
    {
        edx = t13;
        loc_718 = 0u;
        goto L_1006520c;
    }
    edx = t13;
    ebx = t12;
    if ((int32_t)ebx <= 0) goto L_1006520c;
    ebp = 0u;
L_10064e55: ;
    wr32(sp0 - 0x730u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t14 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t15 = g->edx;
    if (rd8(t14) != 0x2fu)
    {
        edx = t15;
        goto L_10064f28;
    }
    edx = t15;
    wr32(sp0 - 0x730u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t16 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t17 = g->edx;
    if (rd8(t16 + 1u) == 0x2fu)
    {
        edx = t17;
        goto L_1006520c;
    }
    edx = t17;
    wr32(sp0 - 0x730u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t18 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t19 = g->ecx;
    t20 = g->edx;
    if (rd8(t18 + 1u) != 0x2au)
    {
        edx = t20;
        goto L_10064f28;
    }
    ecx = t19;
    edx = t20;
    if (rd8(rd32(sp0 - 0x70cu)) == 0u)
    {
        eax = rd32(sp0 - 0x70cu);
        ecx = (ecx & 0xffffff00u) | rd8(rd32(sp0 - 0x70cu));
        goto L_10064ebb;
    }
    eax = rd32(sp0 - 0x70cu);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(sp0 - 0x70cu));
L_10064ea3: ;
    if ((uint8_t)ecx != 0x2fu) goto L_10064eae;
    if (rd8(eax + 1u) == 0x2au) goto L_10064eb8;
L_10064eae: ;
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_10064ea3;
    }
L_10064ec1: ;
    wr32(sp0 - 0x730u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t21 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x710u, 1, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 != 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        goto L_10064ebb;
    }
    ecx = t22;
    edx = t23;
    wr32(sp0 - 0x730u, COW_IMG(0x10353b54u));
    g->ebx = ebx;
    g->esp = sp0 - 0x728u;
    t24 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353b54u), rd32(sp0 - 0x72cu));
    t25 = g->edx;
    g->edx = t25;
    g->esp = sp0 - 0x72cu;
    t26 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t27 = g->edx;
    g->edi = edi;
    t28 = cow_fastcall(g, COW_IMG(0x1006b7b0u), sp0 - 0x710u, t27, 0);
    g->ebx = rd32(sp0 - 0x720u);
    g->esi = rd32(sp0 - 0x728u);
    g->edi = rd32(sp0 - 0x72cu);
    g->ebp = rd32(sp0 - 0x724u);
    return t28 & 0xffffff00u;
L_10064eb8: ;
    eax = eax + 2u;
L_10064ebb: ;
    if (rd8(eax) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_10064f01;
    }
    goto L_10064ec1;
L_10064f01: ;
    if ((uint8_t)ecx != 0x2au) goto L_10064f0c;
    if (rd8(eax + 1u) == 0x2fu) goto L_10064f0f;
L_10064f0c: ;
    eax = eax + 1u;
    goto L_10064ebb;
L_10064f0f: ;
    wr32(sp0 - 0x730u, eax + 2u);
    g->eax = eax + 2u;
    g->esp = sp0 - 0x72cu;
    t29 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, edx, 1, eax + 2u);
    t30 = g->edx;
    edx = t30;
    ebx = t29;
    ebp = 0u;
L_100650b2: ;
    if ((int32_t)(ebp + 1u) < (int32_t)ebx)
    {
        ebp = ebp + 1u;
        goto L_10064e55;
    }
L_1006520c: ;
    wr32(sp0 - 0x730u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t107 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x710u, 1, 0u);
    t108 = g->edx;
    if (t107 != 0u)
    {
        edx = t108;
        goto L_10064e30;
    }
    eax = t107;
    edx = t108;
L_1006521f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t109 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t110 = g->edx;
    g->edi = edi;
    t111 = cow_fastcall(g, COW_IMG(0x1006b7b0u), sp0 - 0x710u, t110, 0);
    g->ebx = rd32(sp0 - 0x720u);
    g->esi = rd32(sp0 - 0x728u);
    g->edi = rd32(sp0 - 0x72cu);
    g->ebp = rd32(sp0 - 0x724u);
    return (t111 & 0xffffff00u) | 1u;
L_10064f28: ;
    wr32(sp0 - 0x730u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t31 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x730u, ebp);
    if (rd8(t31) == 0x23u)
    {
        edx = t33;
        loc_730 = ebp;
        goto L_100650c0;
    }
    edx = t33;
    loc_730 = ebp;
    g->esp = sp0 - 0x72cu;
    t34 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, loc_730);
    esi = t34;
    edi = COW_IMG(0x10353b4cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        wr32(sp0 - 0x718u, 1u);
        wr32(sp0 - 0x71cu, 0u);
        loc_718 = 1u;
        loc_71c = 0u;
    }
    if (loc_718 == 1u)
    {
        wr32(sp0 - 0x730u, ebp);
        g->edx = 0u;
        g->esp = sp0 - 0x72cu;
        t67 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
        t68 = g->edx;
        if (rd8(t67) == 0u)
        {
            edx = t68;
            goto L_100650b2;
        }
        edx = t68;
        esi = 0u;
L_10065081: ;
        wr32(sp0 - 0x730u, ebp);
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t69 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
        t70 = g->edx;
        if (rd8(esi + t69) == 0x7bu)
        {
            edx = t70;
            goto L_100650aa;
        }
        edx = t70;
        wr32(sp0 - 0x730u, ebp);
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t71 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
        t72 = g->edx;
        if (rd8(esi + t71 + 1u) != 0u)
        {
            edx = t72;
            esi = esi + 1u;
            goto L_10065081;
        }
        edx = t72;
    }
    else
    {
        eax = loc_718 - 1u;
        if (eax != 1u)
        {
            edx = 0u;
        }
        else
        {
            wr32(sp0 - 0x730u, ebp);
            g->edx = 0u;
            g->esp = sp0 - 0x72cu;
            t35 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t36 = g->ecx;
            t37 = g->edx;
            if (rd8(t35) == 0u)
            {
                ecx = t36;
                edx = t37;
                goto L_10064fbe;
            }
            edx = t37;
            esi = 0u;
L_10064f93: ;
            wr32(sp0 - 0x730u, ebp);
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t38 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t39 = g->edx;
            if (rd8(esi + t38) == 0x7du)
            {
                edx = t39;
                goto L_10065032;
            }
            edx = t39;
            wr32(sp0 - 0x730u, ebp);
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t40 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t41 = g->ecx;
            t42 = g->edx;
            if (rd8(esi + t40 + 1u) != 0u)
            {
                edx = t42;
                esi = esi + 1u;
                goto L_10064f93;
            }
            ecx = t41;
            edx = t42;
L_10064fbe: ;
            wr32(sp0 - 0x730u, 0x1cu);
            g->esp = sp0 - 0x724u;
            t43 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, rd32(sp0 - 0x72cu), rd32(sp0 - 0x728u));
            t44 = g->edx;
            if (t43 == 0u)
            {
                edx = t44;
                edi = 0u;
            }
            else
            {
                eax = t43;
                edx = t44;
                g->edx = edx;
                g->esp = sp0 - 0x72cu;
                t45 = cow_thiscall(g, COW_IMG(0x10064190u), eax, 0);
                t46 = g->edx;
                edx = t46;
                edi = t45;
            }
            wr32(sp0 - 0x730u, ebp + 1u);
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t47 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 1u);
            t48 = g->edx;
            if (t47 == 0u)
            {
                edx = t48;
                goto L_10065038;
            }
            edx = t48;
            esi = ebp + 1u;
            wr32(sp0 - 0x730u, esi);
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t49 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
            t50 = g->edx;
            if (rd8(t49) != 0x3du)
            {
                edx = t50;
                goto L_10065038;
            }
            edx = t50;
            wr32(sp0 - 0x730u, ebp + 2u);
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t51 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 2u);
            t52 = g->ecx;
            t53 = g->edx;
            wr32(sp0 - 0x730u, t51);
            g->edx = t53;
            t54 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, t51);
            t55 = g->edx;
            wr32(sp0 - 0x71cu, t54);
            wr32(sp0 - 0x730u, t54);
            wr32(sp0 - 0x734u, ebp);
            g->edx = t55;
            g->esp = sp0 - 0x730u;
            t56 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t57 = g->edx;
            wr32(sp0 - 0x734u, t56);
            g->esp = sp0 - 0x72cu;
            t58 = cow_fastcall(g, COW_IMG(0x100643b0u), edi, t57, 2, t56, rd32(sp0 - 0x730u));
            t59 = g->edx;
            eax = t58;
            edx = t59;
            ebp = ebp + 2u;
L_10065052: ;
            wr32(sp0 - 0x730u, edi);
            t65 = rd32(sp0 - 0x71cu) + 1u;
            wr32(sp0 - 0x71cu, t65);
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            cow_thiscall(g, COW_IMG(0x1006baf0u), rd32(sp0 - 0x714u) + 0x10cu, 1, edi);
            t66 = g->edx;
            edx = t66;
        }
    }
    goto L_100650b2;
L_10065032: ;
    wr32(sp0 - 0x718u, 0u);
    edi = 0u;
    loc_718 = 0u;
    goto L_100650b2;
L_10065038: ;
    t60 = rd32(sp0 - 0x71cu);
    wr32(sp0 - 0x730u, t60);
    wr32(sp0 - 0x734u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x730u;
    t61 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t62 = g->edx;
    wr32(sp0 - 0x734u, t61);
    g->esp = sp0 - 0x72cu;
    t63 = cow_fastcall(g, COW_IMG(0x100643b0u), edi, t62, 2, t61, rd32(sp0 - 0x730u));
    t64 = g->edx;
    eax = t63;
    edx = t64;
    goto L_10065052;
L_100650aa: ;
    wr32(sp0 - 0x718u, 2u);
    loc_718 = 2u;
    goto L_100650b2;
L_100650c0: ;
    g->esp = sp0 - 0x72cu;
    t73 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, loc_730);
    esi = t73 + 1u;
    edi = COW_IMG(0x10353b78u);
    ecx = 7u;
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
    }
    else
    {
        wr32(sp0 - 0x730u, 0x1cu);
        g->esp = sp0 - 0x724u;
        t74 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, 0u, 1, 3, 0x1cu, rd32(sp0 - 0x72cu), rd32(sp0 - 0x728u));
        t75 = g->edx;
        if (t74 == 0u)
        {
            edx = t75;
            esi = 0u;
        }
        else
        {
            eax = t74;
            edx = t75;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t76 = cow_thiscall(g, COW_IMG(0x10064190u), eax, 0);
            t77 = g->edx;
            edx = t77;
            esi = t76;
        }
        wr32(sp0 - 0x730u, 0u);
        wr32(sp0 - 0x734u, ebp + 2u);
        g->edx = edx;
        g->esp = sp0 - 0x730u;
        t78 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 2u);
        t79 = g->edx;
        wr32(sp0 - 0x734u, t78);
        wr32(sp0 - 0x738u, ebp + 1u);
        g->edx = t79;
        g->esp = sp0 - 0x734u;
        t80 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 1u);
        t81 = g->edx;
        wr32(sp0 - 0x738u, t80);
        g->esp = sp0 - 0x72cu;
        t82 = cow_fastcall(g, COW_IMG(0x100642b0u), esi, t81, 3, t80, rd32(sp0 - 0x734u), 0u);
        wr32(sp0 - 0x730u, esi);
        g->edx = rd32(sp0 - 0x714u);
        t83 = rd32(sp0 - 0x714u);
        cow_thiscall(g, COW_IMG(0x1006baf0u), t83 + 0x10cu, 1, esi);
        t84 = g->edx;
        edx = t84;
    }
    wr32(sp0 - 0x730u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t85 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t86 = g->edx;
    esi = t85 + 1u;
    edi = COW_IMG(0x10353b44u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = t86;
    }
    else
    {
        edx = t86;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        cow_thiscall(g, COW_IMG(0x1006b4e0u), sp0 - 0x704u, 0);
        t87 = g->edx;
        wr32(sp0 - 0x730u, ebp + 1u);
        g->edx = t87;
        t88 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 1u);
        t89 = g->edx;
        if (rd8(t88) == 0x2fu)
        {
            edx = t89;
            esi = ebp + 1u;
            goto L_100651c8;
        }
        edx = t89;
        esi = ebp + 1u;
        wr32(sp0 - 0x730u, esi);
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t90 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t91 = g->edx;
        if (rd8(t90) == 0x5cu)
        {
            edx = t91;
            goto L_100651c8;
        }
        edx = t91;
        wr32(sp0 - 0x730u, esi);
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t92 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t93 = g->edx;
        if (rd8(t92 + 1u) == 0x3au)
        {
            edx = t93;
            goto L_100651c8;
        }
        eax = t92;
        edx = t93;
        wr32(sp0 - 0x730u, arg1);
        g->esp = sp0 - 0x72cu;
        cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x704u, edx, 1, arg1);
        t94 = g->edx;
        g->edx = t94;
        cow_thiscall(g, COW_IMG(0x1006b650u), sp0 - 0x704u, 0);
        t95 = g->edx;
        wr32(sp0 - 0x730u, esi);
        g->edx = t95;
        t96 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t97 = g->edx;
        wr32(sp0 - 0x730u, t96);
        cow_thiscall(g, COW_IMG(0x1006b6b0u), sp0 - 0x704u, 1, t96);
L_100651df: ;
        wr32(sp0 - 0x730u, sp0 - 0x704u);
        g->ebx = ebx;
        g->edi = edi;
        g->edx = sp0 - 0x704u;
        t100 = rd32(sp0 - 0x714u);
        g->esp = sp0 - 0x72cu;
        t101 = cow_thiscall(g, COW_IMG(0x10064db0u), t100, 1, sp0 - 0x704u);
        t102 = g->ecx;
        t103 = g->edx;
        if ((uint8_t)t101 != 0u)
        {
            eax = t101;
            edx = t103;
        }
        else
        {
            ecx = t102;
            edx = t103;
            wr32(sp0 - 0x730u, sp0 - 0x704u);
            wr32(sp0 - 0x734u, COW_IMG(0x10353b28u));
            g->ebx = ebx;
            g->esp = sp0 - 0x72cu;
            t104 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353b28u), sp0 - 0x704u);
            t105 = g->edx;
            eax = t104;
            edx = t105;
        }
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
        t106 = g->edx;
        edx = t106;
    }
    goto L_1006520c;
L_100651c8: ;
    wr32(sp0 - 0x730u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t98 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
    t99 = g->edx;
    wr32(sp0 - 0x730u, t98);
    cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x704u, t99, 1, t98);
    goto L_100651df;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10064db0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
