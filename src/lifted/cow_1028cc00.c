/* f_0x1028cc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1028cc00(Guest* g)
{
    uint32_t al_m14;
    uint32_t al_m18;
    uint32_t al_mc;
    double d21;
    double d22;
    double d23;
    double d27;
    double d28;
    double d29;
    double d30;
    double d34;
    double d35;
    double d36;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x20u, in_ebx);
    wr32(sp1 - 0x24u, in_esi);
    wr32(sp1 - 0x28u, in_edi);
    if (rd32(arg1 + 0x44u) != 0u)
    {
        eax = rd32(arg1 + 0x44u);
        wr32(sp1 - 0x18u, 0u);
        if ((int32_t)eax > 0)
        {
            ecx = self;
            edx = in_edx;
            ebx = 0u;
            al_m18 = 0u;
L_1028cc2b: ;
            wr32(sp1 - 0x2cu, ebx);
            wr32(sp1 - 0x30u, arg1);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x28u;
            t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, ebx);
            t2 = g->ecx;
            t3 = g->edx;
            wr32(sp1 - 0x14u, t1);
            if ((int32_t)rd32(t1) > 1376257)
            {
                eax = rd32(t1);
                ecx = t2;
                edx = t3;
                goto L_1028ce09;
            }
            eax = rd32(t1);
            ecx = t2;
            edx = t3;
            zf = rd32(t1) == 0x150001u;
            al_m14 = t1;
            if (zf) goto L_1028cd33;
            if (eax != 0xb0001u) goto L_1028ce17;
            wr32(sp1 - 0x2cu, COW_IMG(0x103ba22cu));
            wr32(sp1 - 0x30u, arg2);
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp1 - 0x1cu;
            t4 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba22cu), rd32(sp1 - 0x28u), rd32(sp1 - 0x24u), rd32(sp1 - 0x20u));
            t5 = g->ecx;
            t6 = g->edx;
            wr32(sp1 - 0x34u, ebx);
            wr32(sp1 - 0x38u, arg1);
            g->ecx = t5;
            g->edx = t6;
            g->esp = sp1 - 0x30u;
            t7 = cow_cdecl(g, COW_IMG(0x10279b80u), 2, arg1, ebx);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(sp1 - 0x3cu, t7);
            wr32(sp1 - 0x40u, COW_IMG(0x103ba21cu));
            wr32(sp1 - 0x44u, arg2);
            g->ebx = ebx;
            g->ecx = t8;
            t10 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t9, 1, 5, arg2, COW_IMG(0x103ba21cu), t7, arg1, rd32(sp1 - 0x34u));
            t11 = g->ecx;
            t12 = g->edx;
            wr32(sp1 - 0x48u, ebx);
            wr32(sp1 - 0x4cu, 2u);
            wr32(sp1 - 0x50u, arg1);
            g->ecx = t11;
            g->edx = t12;
            g->esp = sp1 - 0x44u;
            t13 = cow_cdecl(g, COW_IMG(0x10279bc0u), 3, arg1, 2u, ebx);
            t14 = g->ecx;
            t15 = g->edx;
            wr32(sp1 - 0x54u, t13);
            wr32(sp1 - 0x58u, COW_IMG(0x103ba214u));
            wr32(sp1 - 0x5cu, arg2);
            g->ebx = ebx;
            g->esp = sp1 - 0x48u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t15, 1, 5, arg2, COW_IMG(0x103ba214u), t13, arg1, 2u);
            t16 = g->edx;
            if (rd32(rd32(rd32(sp1 - 0x14u) + 0x1cu) + 0x68u) == 0u)
            {
                eax = rd32(rd32(rd32(sp1 - 0x14u) + 0x1cu) + 0x68u);
                ecx = rd32(rd32(sp1 - 0x14u) + 0x1cu);
                edx = t16;
            }
            else
            {
                eax = rd32(rd32(rd32(sp1 - 0x14u) + 0x1cu) + 0x68u);
                ecx = rd32(rd32(sp1 - 0x14u) + 0x1cu);
                edx = t16;
                wr32(sp1 - 0x2cu, COW_IMG(0x103ba208u));
                wr32(sp1 - 0x30u, arg2);
                g->ebx = rd32(eax + 0x64u);
                g->eax = eax;
                g->ecx = ecx;
                t17 = rd32(eax + 0x64u);
                g->esp = sp1 - 0x1cu;
                t18 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba208u), rd32(sp1 - 0x28u), rd32(sp1 - 0x24u), rd32(sp1 - 0x20u));
                t19 = g->ecx;
                t20 = g->edx;
                d21 = (double)rdf32(t17 + 0x64u);
                wrf64(sp1 - 0x30u, d21);
                d22 = (double)rdf32(t17 + 0x60u);
                wrf64(sp1 - 0x38u, d22);
                d23 = (double)rdf32(t17 + 0x5cu);
                wrf64(sp1 - 0x40u, d23);
                wr32(sp1 - 0x44u, COW_IMG(0x103ba1ecu));
                wr32(sp1 - 0x48u, arg2);
                g->ebx = t17;
                g->ecx = t19;
                g->esp = sp1 - 0x34u;
                t24 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t20, 1, 5, arg2, COW_IMG(0x103ba1ecu), cow_dlo(d23), cow_dhi(d23), cow_dlo(d22));
                t25 = g->ecx;
                t26 = g->edx;
                d27 = (double)rdf32(t17 + 0x74u);
                wrf64(sp1 - 0x30u, d27);
                d28 = (double)rdf32(t17 + 0x70u);
                wrf64(sp1 - 0x38u, d28);
                d29 = (double)rdf32(t17 + 0x6cu);
                wrf64(sp1 - 0x40u, d29);
                d30 = (double)rdf32(t17 + 0x68u);
                wrf64(sp1 - 0x48u, d30);
                wr32(sp1 - 0x4cu, COW_IMG(0x103ba1d0u));
                wr32(sp1 - 0x50u, arg2);
                g->ebx = t17;
                g->ecx = t25;
                g->esp = sp1 - 0x3cu;
                t31 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t26, 1, 5, arg2, COW_IMG(0x103ba1d0u), cow_dlo(d30), cow_dhi(d30), cow_dlo(d29));
                t32 = g->ecx;
                t33 = g->edx;
                d34 = (double)rdf32(t17 + 0x80u);
                wrf64(sp1 - 0x30u, d34);
                d35 = (double)rdf32(t17 + 0x7cu);
                wrf64(sp1 - 0x38u, d35);
                d36 = (double)rdf32(t17 + 0x78u);
                wrf64(sp1 - 0x40u, d36);
                wr32(sp1 - 0x44u, COW_IMG(0x103ba1b8u));
                wr32(sp1 - 0x48u, arg2);
                g->ebx = t17;
                g->ecx = t32;
                g->esp = sp1 - 0x34u;
                t37 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t33, 1, 5, arg2, COW_IMG(0x103ba1b8u), cow_dlo(d36), cow_dhi(d36), cow_dlo(d35));
                t38 = g->ecx;
                t39 = g->edx;
                eax = t37;
                ecx = t38;
                edx = t39;
                ebx = rd32(sp1 - 0x18u);
            }
            wr32(sp1 - 0x2cu, COW_IMG(0x103b3238u));
            wr32(sp1 - 0x30u, arg2);
            g->ebx = ebx;
            g->ecx = ecx;
            g->esp = sp1 - 0x1cu;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b3238u), rd32(sp1 - 0x28u), rd32(sp1 - 0x24u), rd32(sp1 - 0x20u));
            t40 = g->ecx;
            t41 = g->edx;
            ecx = t40;
            edx = t41;
L_1028ce26: ;
            wr32(sp1 - 0x18u, ebx + 1u);
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x44u))
            {
                eax = rd32(arg1 + 0x44u);
                al_m18 = ebx + 1u;
                ebx = ebx + 1u;
                goto L_1028cc2b;
            }
        }
    }
    g->ebx = in_ebx;
    return;
L_1028cd33: ;
    wr32(sp1 - 0x2cu, ebx);
    wr32(sp1 - 0x30u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x14u;
    t42 = cow_cdecl(g, COW_IMG(0x1028ce40u), 7, arg1, ebx, rd32(sp1 - 0x28u), rd32(sp1 - 0x24u), rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu), rd32(sp1 - 0x18u));
    t43 = g->ecx;
    t44 = rd32(sp1 - 0x18u);
    wr32(sp1 - 0x34u, t44);
    wr32(sp1 - 0x38u, 2u);
    wr32(sp1 - 0x3cu, arg1);
    g->ecx = t43;
    g->edx = t44;
    g->esp = sp1 - 0x30u;
    t45 = cow_cdecl(g, COW_IMG(0x10279bc0u), 3, arg1, 2u, t44);
    t46 = g->ecx;
    t47 = g->edx;
    wr32(sp1 - 0x40u, t42);
    wr32(sp1 - 0x44u, arg1);
    wr32(sp1 - 8u, t45);
    g->ecx = t46;
    g->edx = t47;
    g->esp = sp1 - 0x3cu;
    t48 = cow_cdecl(g, COW_IMG(0x10279b60u), 2, arg1, t42);
    t49 = g->ecx;
    t50 = g->edx;
    wr32(sp1 - 0x48u, t42);
    wr32(sp1 - 0x4cu, 3u);
    wr32(sp1 - 0x50u, arg1);
    wr32(sp1 - 0x14u, t48);
    g->ecx = t49;
    g->edx = t50;
    g->esp = sp1 - 0x44u;
    t51 = cow_cdecl(g, COW_IMG(0x10279bc0u), 3, arg1, 3u, t42);
    t52 = g->ecx;
    t53 = g->edx;
    wr32(sp1 - 4u, t51);
    t54 = rd32(sp1 - 0x18u);
    wr32(sp1 - 0x54u, t54);
    wr32(sp1 - 0x58u, arg1);
    g->eax = t54;
    g->esp = sp1 - 0x3cu;
    t55 = cow_cdecl(g, COW_IMG(0x1028ced0u), 7, arg1, t54, arg1, 3u, rd32(sp1 - 0x48u), arg1, rd32(sp1 - 0x40u));
    wr32(sp1 - 0x10u, t55);
    t56 = rd32(t42 * 4u + rd32(arg1 + 0x98u));
    wr32(sp1 - 0x5cu, t56);
    wr32(sp1 - 0x60u, arg1);
    g->ecx = rd32(arg1 + 0x98u);
    g->edx = t56;
    t57 = rd32(arg1 + 0x98u);
    g->esp = sp1 - 0x58u;
    t58 = cow_cdecl(g, COW_IMG(0x10279b40u), 2, arg1, t56);
    t59 = g->ecx;
    t60 = g->edx;
    wr32(sp1 - 0xcu, t58);
    if (rd8(COW_IMG(0x109a2794u)) == 0u)
    {
        ecx = t59;
        edx = t60;
        ebx = t42;
        al_mc = t58;
    }
    else
    {
        eax = (t58 & 0xffffff00u) | rd8(COW_IMG(0x109a2794u));
        ecx = t59;
        edx = t60;
        ebx = t42;
        al_mc = t58;
        wr32(sp1 - 0x2cu, COW_IMG(0x103ba188u));
        wr32(sp1 - 0x30u, arg2);
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp1 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba188u), rd32(sp1 - 0x28u), rd32(sp1 - 0x24u), rd32(sp1 - 0x20u));
        t61 = g->ecx;
        t62 = g->edx;
        wr8(COW_IMG(0x109a2794u), 0u);
        ecx = t61;
        edx = t62;
    }
    t63 = rd32(sp1 - 0x14u);
    wr32(sp1 - 0x2cu, t63);
    wr32(sp1 - 0x30u, COW_IMG(0x103ba174u));
    wr32(sp1 - 0x34u, arg2);
    g->ebx = ebx;
    g->eax = t63;
    g->esp = sp1 - 0x20u;
    t64 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba174u), t63, rd32(sp1 - 0x28u), rd32(sp1 - 0x24u));
    t65 = rd32(sp1 - 0x10u);
    wr32(sp1 - 0x38u, t65);
    t66 = rd32(sp1 - 0xcu);
    wr32(sp1 - 0x3cu, t66);
    wr32(sp1 - 0x40u, COW_IMG(0x103ba168u));
    wr32(sp1 - 0x44u, arg2);
    g->ebx = ebx;
    g->esp = sp1 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t66, 1, 5, arg2, COW_IMG(0x103ba168u), t66, t65, arg2);
    t67 = g->edx;
    t68 = rd32(sp1 - 8u);
    wr32(sp1 - 0x48u, t68);
    t69 = rd32(sp1 - 4u);
    wr32(sp1 - 0x4cu, t69);
    wr32(sp1 - 0x50u, COW_IMG(0x103ba168u));
    wr32(sp1 - 0x54u, arg2);
    g->ebx = ebx;
    g->eax = t68;
    g->ecx = t69;
    g->esp = sp1 - 0x40u;
    t70 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t67, 1, 5, arg2, COW_IMG(0x103ba168u), t69, t68, arg2);
    t71 = g->ecx;
    t72 = g->edx;
    wr32(sp1 - 0x58u, ebx);
    wr32(sp1 - 0x5cu, arg2);
    wr32(sp1 - 0x60u, arg1);
    g->ebx = ebx;
    g->ecx = t71;
    g->edx = t72;
    g->esp = sp1 - 0x54u;
    t73 = cow_cdecl(g, COW_IMG(0x1028cf60u), 3, arg1, arg2, ebx);
    t74 = g->ecx;
    t75 = g->edx;
    wr32(sp1 - 0x64u, COW_IMG(0x103b3238u));
    wr32(sp1 - 0x68u, arg2);
    g->ebx = ebx;
    g->ecx = t74;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t75, 1, 5, arg2, COW_IMG(0x103b3238u), arg1, arg2, rd32(sp1 - 0x58u));
    t76 = g->ecx;
    wr32(arg3 + ebx * 4u, 1u);
    ecx = t76;
    edx = arg3;
    ebx = rd32(sp1 - 0x18u);
    goto L_1028ce26;
L_1028ce09: ;
    if ((int32_t)eax < 1835010) goto L_1028ce17;
    if ((int32_t)eax <= 1835011) goto L_1028ce26;
L_1028ce17: ;
    wr32(sp1 - 0x2cu, eax);
    wr32(sp1 - 0x30u, COW_IMG(0x103ba144u));
    wr32(sp1 - 0x34u, arg2);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp1 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba144u), eax, rd32(sp1 - 0x28u), rd32(sp1 - 0x24u));
    t77 = g->ecx;
    t78 = g->edx;
    ecx = t77;
    edx = t78;
    goto L_1028ce26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028cc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028cc00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
