/* f_0x100da750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100da750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
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
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if ((int32_t)rd32(self + 0x8cu) >= 0)
    {
        wr32(self + 0x8cu, 0xffffffffu);
    }
    if (rd32(self + 0x98u) != 0u) goto L_100da798;
    if (rd32(self + 0x90u) != 0x64u)
    {
        eax = in_eax;
        goto L_100dad3a;
    }
    t1 = rd32(self + 0x88u);
    wr32(self + 0x90u, 0x65u);
    wr32(self + 0x8cu, t1);
    return (t1 & 0xffffff00u) | 1u;
L_100da798: ;
    if (rd32(self + 0x88u) == 0xcu)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x88u);
        if (eax == 0x15u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            if (eax == 0xcau)
            {
                ecx = self;
                edx = in_edx;
            }
            else
            {
                if (eax == 0xcbu)
                {
                    ecx = self;
                    edx = in_edx;
                }
                else
                {
                    if (eax == 0xc9u)
                    {
                        ecx = self;
                        edx = in_edx;
                    }
                    else
                    {
                        g->ebx = 0u;
                        g->ecx = self;
                        g->edx = in_edx;
                        g->esp = sp0 - 0x10u;
                        t2 = cow_stdcall(g, COW_IMG(0x100ef870u), 0);
                        t3 = g->ecx;
                        t4 = g->edx;
                        if (t2 == 0u)
                        {
                            ecx = t3;
                            edx = t4;
                        }
                        else
                        {
                            edx = t4;
                            if (rd32(self + 0x88u) != 9u)
                            {
                                g->ebx = 0u;
                                g->ebp = 0xcbu;
                                g->esp = sp0 - 0x10u;
                                cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xcbu, 0u);
                                t5 = g->edx;
                                edx = t5;
                            }
                            g->ebx = 0u;
                            g->ebp = 0xcbu;
                            g->esp = sp0 - 0x10u;
                            t6 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xau, 0u);
                            t7 = g->ecx;
                            t8 = g->edx;
                            if (t6 != 0u)
                            {
                                ecx = t7;
                                edx = t8;
                            }
                            else
                            {
                                edx = t8;
                                g->ebx = 0u;
                                g->ebp = 0xcbu;
                                g->esp = sp0 - 0x10u;
                                cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xc9u, 0u);
                                t9 = g->ecx;
                                t10 = g->edx;
                                ecx = t9;
                                edx = t10;
                            }
                        }
                        g->ebx = 0u;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t11 = cow_stdcall(g, COW_IMG(0x100ef8b0u), 0);
                        t12 = g->ecx;
                        t13 = g->edx;
                        if (t11 == 0u)
                        {
                            ecx = t12;
                            edx = t13;
                        }
                        else
                        {
                            edx = t13;
                            if (rd32(self + 0x88u) != 9u)
                            {
                                g->ebx = 0u;
                                g->ebp = 0xcbu;
                                g->esp = sp0 - 0x10u;
                                cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xcbu, 0u);
                                t14 = g->edx;
                                edx = t14;
                            }
                            if (rd32(self + 0xa0u) != 0u) goto L_100da845;
                            g->ebx = 0u;
                            g->ebp = 0xcbu;
                            g->esp = sp0 - 0x10u;
                            t15 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xeu, 0u);
                            t16 = g->ecx;
                            t17 = g->edx;
                            if (t15 != 0u)
                            {
                                ecx = t16;
                                edx = t17;
                                goto L_100da85d;
                            }
                            edx = t17;
                            loc_18 = 0xcbu;
L_100da856: ;
                            g->ebx = 0u;
                            g->ebp = 0xcbu;
                            g->esp = sp0 - 0x10u;
                            cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, loc_18, 0u);
                            t21 = g->ecx;
                            t22 = g->edx;
                            ecx = t21;
                            edx = t22;
L_100da85d: ;
                            wr32(self + 0xa0u, 0u);
                        }
                    }
                }
            }
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10103920u), 0);
    t23 = g->edx;
    if (rd32(self + 0x88u) > 0xcbu) goto L_100dac82;
    eax = rd32(self + 0x88u);
    edx = t23;
    t24 = rd32(COW_IMG(0x100dad40u) + rd8(COW_IMG(0x100dad94u) + eax) * 4u);
    switch (t24 - RD)
    {
    case 0x100da88au: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100da88a;
    case 0x100da8bau: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100da8ba;
    case 0x100da8ecu: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100da8ec;
    case 0x100da91eu: goto L_100da91e;
    case 0x100da950u: goto L_100da950;
    case 0x100da994u: goto L_100da994;
    case 0x100da9c5u: goto L_100da9c5;
    case 0x100da9f6u: goto L_100da9f6;
    case 0x100daa2bu: goto L_100daa2b;
    case 0x100daa60u: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100daa60;
    case 0x100daa9du: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100daa9d;
    case 0x100daadau: goto L_100daada;
    case 0x100dab0fu: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100dab0f;
    case 0x100dab3bu: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100dab3b;
    case 0x100dab63u: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100dab63;
    case 0x100dab84u: goto L_100dab84;
    case 0x100daba4u: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100daba4;
    case 0x100dabeeu: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100dabee;
    case 0x100dac2au: goto L_100dac2a;
    case 0x100dac78u: goto L_100dac78;
    case 0x100dac82u: goto L_100dac82;
    default: rt_fatal(g, COW_IMG(0x100da883u), "switch");
    }
    return 0;
L_100da845: ;
    g->ebx = 0u;
    g->ebp = 0xcbu;
    g->esp = sp0 - 0x10u;
    t18 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xbu, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 != 0u)
    {
        ecx = t19;
        edx = t20;
        goto L_100da85d;
    }
    edx = t20;
    loc_18 = 0xc9u;
    goto L_100da856;
L_100da88a: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t83 = cow_stdcall(g, COW_IMG(0x102535d0u), 0);
    t84 = g->ecx;
    t85 = g->edx;
    cow_stdcall(g, COW_IMG(0x10253650u), 0);
    t86 = rd32(self + 0x90u);
    wr32(self + 0x90u, 0x65u);
    if (t86 == 0x64u)
    {
        t87 = rd32(self + 0x88u);
        wr32(self + 0x8cu, t87);
    }
L_100dac82: ;
    if (rd32(self + 0x88u) - 0xcu > 0xbfu)
    {
        eax = rd32(self + 0x88u);
        goto L_100dad38;
    }
    eax = rd32(self + 0x88u);
    ecx = rd32(self + 0x88u) - 0xcu;
    t88 = rd32(COW_IMG(0x100dae60u) + rd8(COW_IMG(0x100dae70u) + ecx) * 4u);
    switch (t88 - RD)
    {
    case 0x100daca6u: edx = rd8(COW_IMG(0x100dae70u) + ecx); goto L_100daca6;
    case 0x100dace7u: goto L_100dace7;
    case 0x100dad2cu: goto L_100dad2c;
    case 0x100dad38u: goto L_100dad38;
    default: rt_fatal(g, COW_IMG(0x100dac9fu), "switch");
    }
    return 0;
L_100da8ba: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t80 = cow_cdecl(g, COW_IMG(0x100ed7e0u), 1, self + 0xcu);
    t81 = g->edx;
    if (t80 != 0xffffffffu)
    {
        eax = t80;
        goto L_100da8e4;
    }
    edx = t81;
    zf = rd32(self + 0x88u) == 1u;
L_100dac42: ;
    if (zf)
    {
        wr32(self + 0x94u, 0xcbu);
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xcbu, 0u);
    }
    goto L_100dac82;
L_100da8e4: ;
    zf = eax == 1u;
L_100dabd1: ;
    if (!zf) goto L_100dac82;
L_100dabd7: ;
    t82 = rd32(self + 0x88u);
    wr32(self + 0x90u, 0x65u);
    wr32(self + 0x8cu, t82);
    goto L_100dac82;
L_100da8ec: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    g->edx = self + 0xcu;
    g->esp = sp0 - 0x10u;
    t77 = cow_call_regs(g, COW_IMG(0x100ee0a0u), eax, g->ecx, g->edx, 1, 1, self + 0xcu);
    t78 = g->edx;
    if (t77 != 0xffffffffu)
    {
        eax = t77;
        goto L_100da916;
    }
    edx = t78;
    zf = rd32(self + 0x88u) == 0x13u;
    goto L_100dac42;
L_100da916: ;
    zf = eax == 1u;
L_100dac14: ;
    if (!zf) goto L_100dac82;
L_100dac16: ;
    t79 = rd32(self + 0x88u);
    wr32(self + 0x90u, 0x65u);
    wr32(self + 0x8cu, t79);
    goto L_100dac82;
L_100da91e: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t74 = cow_call_regs(g, COW_IMG(0x100edfb0u), eax, g->ecx, g->edx, 1, 1, self + 0xcu);
    t75 = g->edx;
    if (t74 != 0xffffffffu)
    {
        eax = t74;
        goto L_100da948;
    }
    edx = t75;
    zf = rd32(self + 0x88u) == 2u;
    goto L_100dac42;
L_100da948: ;
    zf = eax == 1u;
L_100dac62: ;
    if (!zf) goto L_100dac82;
L_100dac64: ;
    t76 = rd32(self + 0x88u);
    wr32(self + 0x90u, 0x65u);
    wr32(self + 0x8cu, t76);
    goto L_100dac82;
L_100da950: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    t70 = rd32(self + 0x80u);
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t71 = cow_call_regs(g, COW_IMG(0x100ee160u), t70, g->ecx, g->edx, 1, 2, self + 0xcu, t70);
    t72 = g->ecx;
    t73 = g->edx;
    if (t71 != 0xffffffffu)
    {
        eax = t71;
        ecx = t72;
        edx = t73;
        goto L_100da981;
    }
    edx = t73;
    zf = rd32(self + 0x88u) == 3u;
    goto L_100dac42;
L_100da981: ;
    if (eax != 1u) goto L_100dac82;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x100f05f0u), 0);
    goto L_100dac64;
L_100da994: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    t66 = rd32(self + 0x80u);
    g->edi = 9u;
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t67 = cow_call_regs(g, COW_IMG(0x100ee900u), t66, g->ecx, g->edx, 1, 2, self + 0xcu, t66);
    t68 = g->ecx;
    t69 = g->edx;
    if (t67 != 0xffffffffu)
    {
        eax = t67;
        ecx = t68;
        edx = t69;
        goto L_100da981;
    }
    edx = t69;
    zf = rd32(self + 0x88u) == 0x14u;
    goto L_100dac42;
L_100da9c5: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    t62 = rd32(self + 0x80u);
    g->edi = 9u;
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t63 = cow_call_regs(g, COW_IMG(0x100eeb70u), t62, g->ecx, g->edx, 1, 2, self + 0xcu, t62);
    t64 = g->ecx;
    t65 = g->edx;
    if (t63 != 0xffffffffu)
    {
        eax = t63;
        ecx = t64;
        edx = t65;
        goto L_100da981;
    }
    edx = t65;
    zf = rd32(self + 0x88u) == 0x16u;
    goto L_100dac42;
L_100da9f6: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    t58 = rd32(self + 0x80u);
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t59 = cow_call_regs(g, COW_IMG(0x100eede0u), t58, g->ecx, g->edx, 1, 2, self + 0xcu, t58);
    t60 = g->ecx;
    t61 = g->edx;
    if (t59 != 0xffffffffu)
    {
        eax = t59;
        ecx = t60;
        edx = t61;
        goto L_100da981;
    }
    edx = t61;
    zf = rd32(self + 0x88u) == 0x17u;
    goto L_100dac42;
L_100daa2b: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    t54 = rd32(self + 0x80u);
    g->edi = 9u;
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t55 = cow_call_regs(g, COW_IMG(0x100ee690u), t54, g->ecx, g->edx, 1, 2, self + 0xcu, t54);
    t56 = g->ecx;
    t57 = g->edx;
    if (t55 != 0xffffffffu)
    {
        eax = t55;
        ecx = t56;
        edx = t57;
        goto L_100da981;
    }
    edx = t57;
    zf = rd32(self + 0x88u) == 4u;
    goto L_100dac42;
L_100daa60: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t51 = cow_cdecl(g, COW_IMG(0x100eef80u), 3, self + 0xcu, in_edi, in_ebp);
    t52 = g->ecx;
    t53 = g->edx;
    if (t51 != 0xffffffffu)
    {
        eax = t51;
        ecx = t52;
        edx = t53;
        goto L_100daa8a;
    }
    edx = t53;
    zf = rd32(self + 0x88u) == 0x12u;
    goto L_100dac42;
L_100daa8a: ;
    if (eax != 1u) goto L_100dac82;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x100f05f0u), 0);
    goto L_100dabd7;
L_100daa9d: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    g->ecx = ecx;
    g->edx = self + 0xcu;
    g->esp = sp0 - 8u;
    t48 = cow_cdecl(g, COW_IMG(0x100eee90u), 3, self + 0xcu, in_edi, in_ebp);
    t49 = g->ecx;
    t50 = g->edx;
    if (t48 != 0xffffffffu)
    {
        eax = t48;
        ecx = t49;
        edx = t50;
        goto L_100daac7;
    }
    edx = t50;
    zf = rd32(self + 0x88u) == 0x11u;
    goto L_100dac42;
L_100daac7: ;
    if (eax != 1u) goto L_100dac82;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x100f05f0u), 0);
    goto L_100dac16;
L_100daada: ;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    t45 = rd32(self + 0x80u);
    g->edx = self + 0xcu;
    g->esp = sp0 - 0x10u;
    t46 = cow_call_regs(g, COW_IMG(0x100ef020u), eax, g->ecx, g->edx, 1, 2, self + 0xcu, t45);
    t47 = g->edx;
    if (t46 != 0xffffffffu)
    {
        eax = t46;
        goto L_100da916;
    }
    edx = t47;
    zf = rd32(self + 0x88u) == 5u;
    goto L_100dac42;
L_100dab0f: ;
    t40 = (ecx & 0xffffff00u) | rd8(self + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10253610u), eax, t40, g->edx, 1, 2, 2u, t40);
    t41 = g->ecx;
    t42 = g->edx;
    g->ebx = 0x65u;
    g->edx = t42;
    g->esp = sp0 - 0x18u;
    t43 = cow_cdecl(g, COW_IMG(0x100ef0e0u), 1, self + 0xcu);
    t44 = g->edx;
    if (t43 != 0xffffffffu)
    {
        eax = t43;
        goto L_100dac56;
    }
    edx = t44;
    zf = rd32(self + 0x88u) == 6u;
    goto L_100dac42;
L_100dab3b: ;
    t35 = (eax & 0xffffff00u) | rd8(self + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10253610u), t35, ecx, g->edx, 1, 2, 7u, t35);
    t36 = g->ecx;
    t37 = g->edx;
    g->ebx = 0x65u;
    g->edx = t37;
    t38 = cow_thiscall_cdecl(g, COW_IMG(0x100ef4c0u), t36, 3, self + 0xcu, 7u, t35);
    t39 = g->edx;
    if (t38 != 0xffffffffu)
    {
        eax = t38;
        goto L_100dabc1;
    }
    edx = t39;
    zf = rd32(self + 0x88u) == 7u;
    goto L_100dac42;
L_100dab63: ;
    g->ebx = 0x65u;
    g->edx = self + 0xcu;
    g->esp = sp0 - 8u;
    t33 = cow_cdecl(g, COW_IMG(0x100ef550u), 3, self + 0xcu, in_edi, in_ebp);
    t34 = g->edx;
    if (t33 != 0xffffffffu)
    {
        eax = t33;
        goto L_100dac08;
    }
    edx = t34;
    zf = rd32(self + 0x88u) == 8u;
    goto L_100dac42;
L_100dab84: ;
    g->ebx = 0x65u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t31 = cow_stdcall(g, COW_IMG(0x100ef5b0u), 0);
    t32 = g->edx;
    if (t31 != 0xffffffffu)
    {
        eax = t31;
        goto L_100dac56;
    }
    edx = t32;
    zf = rd32(self + 0x88u) == 9u;
    goto L_100dac42;
L_100daba4: ;
    g->ebx = 0x65u;
    g->esp = sp0 - 0x10u;
    t29 = cow_call_regs(g, COW_IMG(0x100ef640u), g->eax, g->ecx, edx, 1, 1, self + 0xcu);
    t30 = g->edx;
    if (t29 != 0xffffffffu)
    {
        eax = t29;
        goto L_100dabc1;
    }
    edx = t30;
    zf = rd32(self + 0x88u) == 0xau;
    goto L_100dac42;
L_100dabc1: ;
    if (eax != 1u) goto L_100dac82;
    zf = rd32(self + 0x90u) == 0x64u;
    goto L_100dabd1;
L_100dabee: ;
    g->ebx = 0x65u;
    g->esp = sp0 - 0x10u;
    t27 = cow_call_regs(g, COW_IMG(0x100ef680u), g->eax, g->ecx, self + 0xcu, 1, 1, self + 0xcu);
    t28 = g->edx;
    if (t27 != 0xffffffffu)
    {
        eax = t27;
        goto L_100dac08;
    }
    edx = t28;
    zf = rd32(self + 0x88u) == 0xbu;
    goto L_100dac42;
L_100dac08: ;
    if (eax != 1u) goto L_100dac82;
    zf = rd32(self + 0x90u) == 0x64u;
    goto L_100dac14;
L_100dac2a: ;
    g->ebx = 0x65u;
    g->esp = sp0 - 0x10u;
    t25 = cow_call_regs(g, COW_IMG(0x100ef680u), g->eax, g->ecx, edx, 1, 1, self + 0xcu);
    t26 = g->edx;
    if (t25 != 0xffffffffu)
    {
        eax = t25;
        goto L_100dac56;
    }
    edx = t26;
    zf = rd32(self + 0x88u) == 0xeu;
    goto L_100dac42;
L_100dac56: ;
    if (eax != 1u) goto L_100dac82;
    zf = rd32(self + 0x90u) == 0x64u;
    goto L_100dac62;
L_100dac78: ;
    wr32(self + 0x88u, 0u);
    goto L_100dac82;
L_100daca6: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t91 = cow_stdcall(g, COW_IMG(0x100ef780u), 0);
    t92 = g->edx;
    if (t91 != 0xffffffffu)
    {
        eax = t91;
        goto L_100dacc0;
    }
    eax = t91;
    edx = t92;
    zf = rd32(self + 0x88u) == 0xcu;
L_100dacff: ;
    if (!zf) goto L_100dad38;
    wr32(self + 0x94u, 0xcbu);
    g->ebx = 0x65u;
    g->ebp = 0xcbu;
    g->esp = sp0 - 0x10u;
    t93 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xcbu, 0u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (t93 & 0xffffff00u) | 1u;
L_100dacc0: ;
    if (eax != 1u) goto L_100dad38;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dad38;
    t94 = rd32(self + 0x88u);
    wr32(self + 0x8cu, t94);
    wr32(self + 0x90u, 0x65u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100dace7: ;
    g->edx = self + 0xcu;
    g->esp = sp0 - 0x14u;
    t89 = cow_stdcall(g, COW_IMG(0x100ef780u), 0);
    t90 = g->edx;
    if (t89 != 0xffffffffu)
    {
        eax = t89;
        goto L_100dad18;
    }
    eax = t89;
    edx = t90;
    zf = rd32(self + 0x88u) == 0x15u;
    goto L_100dacff;
L_100dad18: ;
    if (eax != 1u) goto L_100dad38;
    if (rd32(self + 0x90u) != 0x64u) goto L_100dad38;
    eax = rd32(self + 0x88u);
L_100dad2c: ;
    wr32(self + 0x8cu, eax);
    wr32(self + 0x90u, 0x65u);
L_100dad38: ;
L_100dad3a: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100da750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100da750(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
