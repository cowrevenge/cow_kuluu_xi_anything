/* f_0x102930c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102930c0(Guest* g)
{
    double d35;
    double d39;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_c;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_102930fb;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    wr32(sp0 - 0x2cu, 0x495u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bb254u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x103bb4b4u));
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb4b4u), COW_IMG(0x103b27fcu));
    return;
L_102930fb: ;
    t4 = rd32(esi + 0x4cu);
    wr32(sp0 - 0x2cu, t4);
    t5 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x30u, t5);
    t6 = rd32(esi + 0x24u);
    wr32(sp0 - 0x34u, t6);
    t7 = rd32(esi + 0x2cu);
    wr32(sp0 - 0x38u, t7);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x1027d300u), 4, t7, t6, t5, t4);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x3cu, 0x4a5u);
    wr32(sp0 - 0x40u, COW_IMG(0x103bb254u));
    t10 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x10u, t10);
    t11 = rd32(esi + 0x24u) * 4u;
    wr32(sp0 - 0x44u, t11);
    wr32(sp0 - 0x48u, 1u);
    g->ecx = t8;
    g->edx = t9;
    t12 = rd32(esi + 0x24u);
    g->esp = sp0 - 0x24u;
    t13 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t11, COW_IMG(0x103bb254u), 0x4a5u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), in_edi);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x4cu, 0x4a6u);
    wr32(sp0 - 0x50u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x54u, t11);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 4u, t13);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x34u;
    t16 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t11, COW_IMG(0x103bb254u), 0x4a6u, 1u, rd32(sp0 - 0x44u), COW_IMG(0x103bb254u), 0x4a5u, rd32(sp0 - 0x38u));
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x5cu, 0x4abu);
    wr32(sp0 - 0x60u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, t10);
    wr32(sp0 - 8u, t16);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x54u;
    t19 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t10, 4u, COW_IMG(0x103bb254u), 0x4abu, 1u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(esi + 0x34u, t19);
    if ((int32_t)t10 <= 0)
    {
        ecx = t20;
        ebp = t12;
        edi = t10;
        goto L_1029317c;
    }
    ecx = t20;
    edx = t21;
    ebx = 0u;
    ebp = t12;
    edi = t10;
L_1029316b: ;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t22 = cow_stdcall(g, COW_IMG(0x10293ed0u), 0);
    t23 = g->edx;
    t24 = rd32(esi + 0x34u);
    wr32(ebx * 4u + t24, t22);
    if ((int32_t)(ebx + 1u) < (int32_t)edi)
    {
        ecx = t24;
        edx = t23;
        ebx = ebx + 1u;
        goto L_1029316b;
    }
    ecx = t24;
L_1029317c: ;
    wr32(sp0 - 0x18u, 0u);
    if ((int32_t)edi > 0)
    {
        loc_18 = 0u;
        goto L_102932bd;
    }
L_1029318c: ;
    wr32(sp0 - 0x2cu, 0x4efu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    t64 = rd32(sp0 - 8u);
    wr32(sp0 - 0x34u, t64);
    t65 = rd32(arg2 + rd32(esi + 0x1cu) * 4u);
    wr32(esi + 0x30u, t65);
    g->edx = t65;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t64, COW_IMG(0x103bb254u), 0x4efu);
    t66 = g->edx;
    wr32(sp0 - 0x38u, 0x4f0u);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bb254u));
    t67 = rd32(sp0 - 4u);
    wr32(sp0 - 0x40u, t67);
    g->ecx = t67;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t67, COW_IMG(0x103bb254u), 0x4f0u);
    t68 = g->ecx;
    wr32(sp0 - 0x44u, 0x4f1u);
    wr32(sp0 - 0x48u, COW_IMG(0x103bb254u));
    t69 = rd32(esi + 0x2cu);
    wr32(sp0 - 0x4cu, t69);
    g->ecx = t68;
    g->edx = t69;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t69, COW_IMG(0x103bb254u), 0x4f1u);
    t70 = g->ecx;
    t71 = g->edx;
    t72 = rd32(esi + 0x38u);
    wr32(esi + 0x2cu, 0u);
    if (t72 == 0u)
    {
        ecx = t70;
        edx = t71;
    }
    else
    {
        eax = t72;
        ecx = t70;
        edx = t71;
        wr32(sp0 - 0x2cu, 0x4f9u);
        wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
        wr32(sp0 - 0x34u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x4f9u);
        t73 = g->ecx;
        t74 = g->edx;
        wr32(esi + 0x38u, 0u);
        ecx = t73;
        edx = t74;
    }
    if (rd32(esi + 0x3cu) != 0u)
    {
        eax = rd32(esi + 0x3cu);
        wr32(sp0 - 0x2cu, 0x4fau);
        wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
        wr32(sp0 - 0x34u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x4fau);
        t75 = g->ecx;
        t76 = g->edx;
        wr32(esi + 0x3cu, 0u);
        ecx = t75;
        edx = t76;
    }
    if (rd32(esi + 0x40u) != 0u)
    {
        eax = rd32(esi + 0x40u);
        wr32(sp0 - 0x2cu, 0x4fbu);
        wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
        wr32(sp0 - 0x34u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x4fbu);
        t77 = g->ecx;
        t78 = g->edx;
        wr32(esi + 0x40u, 0u);
        ecx = t77;
        edx = t78;
    }
    wr32(sp0 - 0x2cu, 0x4fdu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x34u, 4u);
    t79 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x38u, t79);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t80 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t79, 4u, COW_IMG(0x103bb254u), 0x4fdu, rd32(sp0 - 0x28u));
    t81 = g->edx;
    wr32(sp0 - 0x3cu, 0x4feu);
    wr32(sp0 - 0x40u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x44u, 4u);
    t82 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x48u, t82);
    wr32(esi + 0x38u, t80);
    g->ecx = t82;
    g->esp = sp0 - 0x34u;
    t83 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t82, 4u, COW_IMG(0x103bb254u), 0x4feu, rd32(sp0 - 0x38u));
    t84 = g->ecx;
    wr32(sp0 - 0x4cu, 0x4ffu);
    wr32(sp0 - 0x50u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x54u, 4u);
    t85 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x58u, t85);
    wr32(esi + 0x3cu, t83);
    g->esp = sp0 - 0x44u;
    t86 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t85, 4u, COW_IMG(0x103bb254u), 0x4ffu, rd32(sp0 - 0x48u));
    wr32(esi + 0x40u, t86);
    t87 = rd32(esi + 0x1cu) * 4u;
    t88 = rd32(esi + 0x1cu);
    wr32(esi + 0x44u, t87);
    if ((int32_t)t88 <= 0) goto L_102934c4;
    ecx = 0u;
L_10293295: ;
    t89 = rd32(rd32(ecx * 4u + rd32(esi + 0x34u)));
    t90 = rd32(ecx * 4u + rd32(esi + 0x34u));
    wr32(ecx * 4u + rd32(esi + 0x38u), t89);
    if (rd32(t90 + 0xcu) != 2u)
    {
        eax = rd32(t90 + 0xcu);
        edx = t90;
        if (eax != 4u)
        {
            if (eax != 8u)
            {
                if (eax == 0x10u)
                {
                    eax = COW_IMG(0x102935e0u);
                }
                else
                {
                    eax = COW_IMG(0x102934d0u);
                }
            }
            else
            {
                eax = COW_IMG(0x102935b0u);
            }
        }
        else
        {
            eax = COW_IMG(0x10293560u);
        }
    }
    else
    {
        edx = t90;
        eax = COW_IMG(0x102934e0u);
    }
    wr32(edx + 0x14u, eax);
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(esi + 0x1cu))
    {
        ecx = ecx + 1u;
        goto L_10293295;
    }
L_102934c4: ;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return;
L_102932b9: ;
    edi = rd32(sp0 - 0x10u);
L_102932bd: ;
    if ((int32_t)ebp > 0)
    {
        eax = 0u;
        ecx = loc_18 << 2u;
        edx = edi * 4u;
L_102932d1: ;
        t25 = rd32(ecx + rd32(esi + 0x2cu));
        wr32(eax * 4u + rd32(sp0 - 8u), t25);
        if ((int32_t)(eax + 1u) < (int32_t)ebp)
        {
            eax = eax + 1u;
            ecx = ecx + edx;
            goto L_102932d1;
        }
        ecx = ecx + edx;
        edi = rd32(sp0 - 0x10u);
    }
    wr32(sp0 - 0x2cu, ebp);
    t26 = rd32(sp0 - 8u);
    wr32(sp0 - 0x30u, t26);
    t27 = rd32(sp0 - 4u);
    wr32(sp0 - 0x34u, t27);
    g->ecx = ecx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10293900u), 3, t27, t26, ebp);
    t28 = g->ecx;
    if (arg2 == 0u)
    {
        ecx = t28;
        x0 = rdf64(COW_IMG(0x10340b78u));
    }
    else
    {
        ecx = rd32(sp0 - 0x18u);
        x0 = (double)rdf32(arg2 + rd32(sp0 - 0x18u) * 4u);
    }
    wrf32(sp0 + 4u, (float)x0);
    if (!(x0 < (double)rdf32(COW_IMG(0x1032a42cu))))
    {
        eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
    }
    else
    {
        eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
        wr32(sp0 + 4u, 0x38d1b717u);
    }
    wr32(sp0 - 0xcu, 0x14u);
    loc_c = 0x14u;
L_10293335: ;
    t29 = rd32(sp0 + 4u);
    wr32(sp0 - 0x2cu, t29);
    wr32(sp0 - 0x30u, ebp);
    wr32(sp0 - 0x34u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10293930u), 5, sp0 - 8u, ebp, t29, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t30 = g->edx;
    wr32(sp0 - 0x38u, sp0 - 0x14u);
    wr32(sp0 - 0x3cu, t29);
    wr32(sp0 - 0x40u, ebp);
    t31 = rd32(sp0 - 4u);
    wr32(sp0 - 0x44u, t31);
    g->ecx = t31;
    g->edx = t30;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10293860u), 4, t31, ebp, t29, sp0 - 0x14u);
    t32 = g->ecx;
    t33 = g->edx;
    if ((int32_t)rd32(sp0 - 0x14u) < 32)
    {
        eax = rd32(sp0 - 0x14u);
        ecx = t32;
        edx = t33;
        goto L_10293381;
    }
    ecx = t32;
    edx = t33;
    t34 = rd32(sp0 - 0xcu) - 1u;
    wr32(sp0 - 0xcu, t34);
    if (rd32(sp0 - 0xcu) == 1u)
    {
        eax = t34;
        goto L_1029341e;
    }
    eax = t34;
    loc_c = t34;
    d35 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x103313a0u)));
    wrf32(sp0 + 4u, (float)d35);
    goto L_10293335;
L_10293381: ;
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x30u, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t48 = cow_cdecl(g, COW_IMG(0x102936e0u), 2, eax, ebp);
    t49 = g->ecx;
    t50 = g->edx;
    wr32(sp0 - 0x34u, 0x4dbu);
    wr32(sp0 - 0x38u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, t48);
    wr32(sp0 - 0xcu, t48);
    g->esp = sp0 - 0x2cu;
    t51 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t48, 1u, COW_IMG(0x103bb254u), 0x4dbu, rd32(sp0 - 0x30u));
    edi = t51;
    eax = 0u;
    ecx = t48 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t48 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t52 = rd32(sp0 + 4u);
    wr32(sp0 - 0x44u, t52);
    wr32(sp0 - 0x48u, ebp - 1u);
    t53 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x4cu, t53);
    t54 = rd32(sp0 - 4u);
    wr32(sp0 - 0x50u, t54);
    wr32(sp0 - 0x54u, t51);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10293720u), 4, t51, t54, t53, ebp - 1u);
    wr32(sp0 - 0x58u, t52);
    t55 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x5cu, t55);
    t56 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x60u, t56);
    wr32(sp0 - 0x64u, t51);
    t57 = rd32(rd32(sp0 - 8u));
    wr32(sp0 - 0x68u, t57);
    t58 = rd32(rd32(esi + 0x34u) + rd32(sp0 - 0x18u) * 4u);
    wr32(sp0 - 0x6cu, t58);
    g->ecx = rd32(esi + 0x34u);
    g->edx = t58;
    t59 = rd32(esi + 0x34u);
    t60 = rd32(sp0 - 0x18u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10293620u), 6, t58, t57, t51, t56, t55, t52);
    t61 = g->ecx;
    t62 = g->edx;
    wr32(sp0 - 0x2cu, 0x4ecu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x34u, t51);
    g->ecx = t61;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t51, COW_IMG(0x103bb254u), 0x4ecu);
    t63 = g->ecx;
    wr32(sp0 - 0x18u, t60 + 1u);
    if ((int32_t)(t60 + 1u) < (int32_t)rd32(sp0 - 0x10u))
    {
        ecx = t63;
        loc_18 = t60 + 1u;
        goto L_102932b9;
    }
    goto L_1029318c;
L_1029341e: ;
    wr32(sp0 - 0x2cu, 0x4cbu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb254u));
    t37 = g->ecx;
    t38 = g->edx;
    d39 = (double)rdf32(sp0 + 4u);
    wrf64(sp0 - 0x30u, d39);
    wr32(sp0 - 0x34u, COW_IMG(0x103bb480u));
    g->ecx = t37;
    g->edx = t38;
    t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb480u), cow_dlo(d39));
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x103bb460u));
    g->edx = t42;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb460u), COW_IMG(0x103bb480u));
    t43 = g->edx;
    edx = t43;
    ebx = 0u;
L_10293455: ;
    t44 = ebx * 4u + rd32(esi + 0x34u);
    wr32(sp0 - 0x2cu, t44);
    g->ecx = t44;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10292720u), 3, t44, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t45 = g->ecx;
    t46 = g->edx;
    if ((int32_t)(ebx + 1u) < (int32_t)edi)
    {
        edx = t46;
        ebx = ebx + 1u;
        goto L_10293455;
    }
    ecx = t45;
    wr32(sp0 - 0x2cu, 0x4d0u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    t47 = rd32(esi + 0x34u);
    wr32(sp0 - 0x34u, t47);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t47, COW_IMG(0x103bb254u), 0x4d0u);
    wr32(esi + 0x34u, 0u);
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102930c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102930c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
