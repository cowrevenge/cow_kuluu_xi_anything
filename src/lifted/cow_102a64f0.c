/* f_0x102a64f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a64f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_5c;
    uint32_t loc_74;
    uint32_t loc_78;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 156u);

    wr32(sp0 - 0x64u, in_ebx);
    wr32(sp0 - 0x68u, in_ebp);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    wr32(sp0 - 0x74u, COW_IMG(0x1036bf68u));
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x78u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, t1, COW_IMG(0x1036bf68u));
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 + 8u, t2);
    if (t2 == 0u)
    {
        eax = t2;
        goto L_102a6589;
    }
    ecx = t3;
    edx = t4;
    ebp = t1;
    esi = t2;
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x58u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t5 = cow_cdecl(g, COW_IMG(0x102a6260u), 3, sp0 - 0x58u, esi, in_edi);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        edi = in_edi;
        goto L_102a6580;
    }
    ecx = t6;
    edx = t7;
    if (rd8(sp0 - 0x53u) != 1u)
    {
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x74u, esi);
        g->esp = sp0 - 0x68u;
        t8 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
        t9 = g->edx;
        if ((int32_t)(0x80u - t8) <= 0)
        {
            edx = t9;
            edi = in_edi;
        }
        else
        {
            ecx = 0x80u - t8;
            edx = t9;
            edi = ecx;
L_102a6542: ;
            wr32(sp0 - 0x74u, esi);
            g->ecx = ecx;
            g->esp = sp0 - 0x68u;
            cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
            t10 = g->ecx;
            t11 = g->edx;
            if (edi != 1u)
            {
                ecx = t10;
                edx = t11;
                edi = edi - 1u;
                goto L_102a6542;
            }
            edx = t11;
            edi = edi - 1u;
        }
    }
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x30u);
    g->ecx = sp0 - 0x30u;
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t12 = cow_cdecl(g, COW_IMG(0x102a62c0u), 3, sp0 - 0x30u, esi, rd32(sp0 - 0x70u));
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        ecx = t13;
        edx = t14;
        goto L_102a6580;
    }
    ecx = t13;
    edx = t14;
    if ((uint8_t)rd32(sp0 - 0x1fu) <= 1u) goto L_102a6593;
    eax = rd32(sp0 - 0x1fu);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, (uint8_t)eax);
    wr32(sp0 - 0x7cu, sp0 - 0x48u);
    g->ecx = ecx;
    g->edx = sp0 - 0x48u;
    g->esp = sp0 - 0x6cu;
    t15 = cow_cdecl(g, COW_IMG(0x102a6330u), 4, sp0 - 0x48u, (uint8_t)eax, esi, rd32(sp0 - 0x70u));
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        eax = t15;
        edx = t17;
        goto L_102a6595;
    }
    ecx = t16;
    edx = t17;
L_102a6580: ;
    wr32(sp0 - 0x74u, esi);
    g->edi = edi;
    g->esp = sp0 - 0x68u;
    t75 = cow_cdecl(g, COW_IMG(0x10311f70u), 3, esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
    eax = t75;
L_102a6589: ;
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_102a6593: ;
    eax = 0u;
L_102a6595: ;
    if ((int32_t)((uint16_t)rd32(sp0 - 0x24u) - eax - 0x30u) > 0)
    {
        ecx = (uint16_t)rd32(sp0 - 0x24u) - eax - 0x30u;
        edi = ecx;
L_102a65aa: ;
        wr32(sp0 - 0x74u, esi);
        g->ecx = ecx;
        g->esp = sp0 - 0x68u;
        cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
        t18 = g->ecx;
        t19 = g->edx;
        if (edi != 1u)
        {
            ecx = t18;
            edx = t19;
            edi = edi - 1u;
            goto L_102a65aa;
        }
        edx = t19;
    }
    wr32(sp0 - 0x74u, sp0 - 0x60u);
    wr32(sp0 - 0x78u, sp0 - 0x30u);
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x6cu;
    t20 = cow_cdecl(g, COW_IMG(0x102a63e0u), 3, sp0 - 0x30u, sp0 - 0x60u, rd32(sp0 - 0x70u));
    t21 = g->ecx;
    wr32(sp0 - 0x5cu, t20);
    if ((int32_t)((uint16_t)rd32(sp0 - 0x1au) * (uint16_t)rd32(sp0 - 0x1cu) * t20) <= 0)
    {
        ecx = t21;
        edx = (uint16_t)rd32(sp0 - 0x1cu);
        edi = (uint16_t)rd32(sp0 - 0x1au) * (uint16_t)rd32(sp0 - 0x1cu) * t20;
        goto L_102a6580;
    }
    ecx = t21;
    edx = (uint16_t)rd32(sp0 - 0x1cu);
    ebx = t20;
    edi = (uint16_t)rd32(sp0 - 0x1au) * (uint16_t)rd32(sp0 - 0x1cu) * t20;
    loc_5c = t20;
    wr32(sp0 - 0x74u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x102a6840u), ecx, 1, ebp);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 == 0u)
    {
        ecx = t23;
        edx = t24;
        ebp = t22;
    }
    else
    {
        edx = t24;
        ebp = t22;
        if (rd32(ebp + 0x1cu) != (uint16_t)rd32(sp0 - 0x1cu))
        {
            eax = (uint16_t)rd32(sp0 - 0x1cu);
            ecx = rd32(ebp + 0x1cu);
            goto L_102a6621;
        }
        if (rd32(ebp + 0x20u) != (uint16_t)rd32(sp0 - 0x1au))
        {
            eax = rd32(ebp + 0x20u);
            ecx = (uint16_t)rd32(sp0 - 0x1au);
            goto L_102a6621;
        }
        eax = rd32(ebp + 0x20u);
        ecx = (uint16_t)rd32(sp0 - 0x1au);
        if (rd32(ebp + 0x24u) == ebx) goto L_102a6670;
L_102a6621: ;
        wr32(sp0 - 0x74u, COW_IMG(0x103be1f8u));
        g->ecx = ecx;
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be1f8u), rd32(sp0 - 0x70u));
        t25 = g->ecx;
        wr32(sp0 - 0x78u, ebx);
        t26 = (uint16_t)rd32(sp0 - 0x1au);
        wr32(sp0 - 0x7cu, t26);
        t27 = (uint16_t)rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x80u, t27);
        wr32(sp0 - 0x84u, COW_IMG(0x103be1d8u));
        g->esp = sp0 - 0x7cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be1d8u), t27);
        t28 = rd32(ebp + 0x24u);
        wr32(sp0 - 0x88u, t28);
        t29 = rd32(ebp + 0x20u);
        wr32(sp0 - 0x8cu, t29);
        t30 = rd32(ebp + 0x1cu);
        wr32(sp0 - 0x90u, t30);
        wr32(sp0 - 0x94u, COW_IMG(0x103be1b8u));
        g->eax = t30;
        g->ecx = t28;
        g->edx = t29;
        g->esp = sp0 - 0x8cu;
        t31 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be1b8u), t30);
        t32 = g->ecx;
        t33 = g->edx;
        wr32(sp0 - 0x98u, COW_IMG(0x103be1a4u));
        g->ecx = t32;
        g->edx = t33;
        g->esp = sp0 - 0x90u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be1a4u), COW_IMG(0x103be1b8u));
        t34 = g->ecx;
        t35 = g->edx;
        ecx = t34;
        edx = t35;
        ebp = 0u;
    }
L_102a6670: ;
    if (rd32(sp0 - 0x60u) == 3u)
    {
        ebx = rd32(sp0 - 0x60u);
        goto L_102a6682;
    }
    ebx = rd32(sp0 - 0x60u);
    if (ebx != 4u) goto L_102a66c4;
L_102a6682: ;
    wr32(sp0 - 0x74u, 0x481u);
    wr32(sp0 - 0x78u, COW_IMG(0x103bde10u));
    wr32(sp0 - 0x7cu, ebx << 8u);
    wr32(sp0 - 0x80u, 1u);
    g->ecx = ebx << 8u;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t36 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ebx << 8u, COW_IMG(0x103bde10u), 0x481u, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    t37 = g->ecx;
    t38 = g->edx;
    wr32(arg1 + 0x38u, t36);
    if (t36 != 0u)
    {
        ecx = t37;
        edx = t38;
        goto L_102a66ba;
    }
    ecx = t37;
    t39 = rd32(sp0 + 8u);
    wr32(sp0 - 0x74u, t39);
    g->edi = edi;
    g->esp = sp0 - 0x68u;
    t40 = cow_cdecl(g, COW_IMG(0x10311f70u), 3, t39, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return t40 & 0xffffff00u;
L_102a66ba: ;
    wr32(arg1 + 0x30u, ebx);
    wr32(arg1 + 0x34u, 0x100u);
L_102a66c4: ;
    wr32(sp0 - 0x74u, 0x48bu);
    wr32(sp0 - 0x78u, COW_IMG(0x103bde10u));
    wr32(sp0 - 0x7cu, edi);
    wr32(sp0 - 0x80u, 1u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t41 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, edi, COW_IMG(0x103bde10u), 0x48bu, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    t42 = g->ecx;
    t43 = g->edx;
    wr32(arg1 + 0x28u, t41);
    if (t41 != 0u) goto L_102a66f7;
    ecx = t42;
    edx = t43;
    t44 = rd32(sp0 + 8u);
    wr32(sp0 - 0x74u, t44);
    g->edi = edi;
    g->esp = sp0 - 0x68u;
    t45 = cow_cdecl(g, COW_IMG(0x10311f70u), 3, t44, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return t45 & 0xffffff00u;
L_102a66f7: ;
    t46 = rd32(sp0 - 0x5cu);
    t47 = rd32(sp0 - 0x1cu);
    t48 = rd32(sp0 - 0x1au);
    wr32(arg1 + 0x24u, t46);
    t49 = rd8(sp0 - 0x1fu);
    wr32(arg1 + 0x1cu, (uint16_t)t47);
    wr32(arg1 + 0x20u, (uint16_t)t48);
    if ((uint8_t)t49 <= 1u)
    {
        edx = (uint16_t)t48;
        t52 = rd32(sp0 + 8u);
        wr32(sp0 - 0x74u, t52);
        t53 = rd32(sp0 - 0x28u);
        wr32(sp0 - 0x78u, t53);
        ecx = t53;
        loc_74 = t52;
        loc_78 = t53;
    }
    else
    {
        t50 = rd32(sp0 + 8u);
        wr32(sp0 - 0x74u, t50);
        t51 = rd32(sp0 - 0x38u);
        wr32(sp0 - 0x78u, t51);
        ecx = t50;
        edx = t51;
        loc_74 = t50;
        loc_78 = t51;
    }
    g->ecx = ecx;
    g->esp = sp0 - 0x64u;
    t54 = cow_cdecl(g, COW_IMG(0x102a6450u), 5, loc_78, loc_74, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t55 = g->ecx;
    t56 = rd32(sp0 + 8u);
    wr32(sp0 - 0x74u, t56);
    t57 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x78u, t57);
    g->edx = t56;
    t58 = cow_cdecl(g, COW_IMG(0x102a6450u), 5, t57, t56, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t59 = g->edx;
    wr32(sp0 - 0x7cu, t58);
    wr32(sp0 - 0x80u, t54);
    wr32(sp0 - 0x84u, sp0 - 0x30u);
    wr32(sp0 - 0x88u, arg1);
    g->edx = t59;
    g->esp = sp0 - 0x78u;
    cow_thiscall_cdecl(g, COW_IMG(0x102a6970u), sp0 - 0x30u, 4, arg1, sp0 - 0x30u, t54, t58);
    t60 = g->ecx;
    t61 = g->edx;
    if (t54 == 0u)
    {
        ecx = t60;
        edx = t61;
        ebx = t58;
        edi = t54;
    }
    else
    {
        ecx = t60;
        edx = t61;
        ebx = t58;
        edi = t54;
        wr32(sp0 - 0x74u, 0x4c5u);
        wr32(sp0 - 0x78u, COW_IMG(0x103bde10u));
        wr32(sp0 - 0x7cu, edi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x70u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103bde10u), 0x4c5u);
        t62 = g->ecx;
        t63 = g->edx;
        ecx = t62;
        edx = t63;
    }
    if (ebx != 0u)
    {
        wr32(sp0 - 0x74u, 0x4cau);
        wr32(sp0 - 0x78u, COW_IMG(0x103bde10u));
        wr32(sp0 - 0x7cu, ebx);
        g->ecx = ecx;
        g->esp = sp0 - 0x70u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103bde10u), 0x4cau);
        t64 = g->ecx;
        ecx = t64;
    }
    t65 = rd32(sp0 + 8u);
    wr32(sp0 - 0x74u, t65);
    g->edi = edi;
    g->ecx = ecx;
    g->edx = t65;
    g->esp = sp0 - 0x68u;
    t66 = cow_cdecl(g, COW_IMG(0x10311f70u), 3, t65, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
    t67 = g->ecx;
    t68 = g->edx;
    wr32(sp0 - 0x74u, arg1);
    g->ecx = t67;
    g->edx = t68;
    g->esp = sp0 - 0x48u;
    t69 = cow_cdecl(g, COW_IMG(0x10298930u), 11, arg1, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t70 = g->ecx;
    t71 = g->edx;
    if (ebp == 0u)
    {
        ecx = t70;
        edx = t71;
        goto L_102a67bd;
    }
    eax = t69;
    ecx = t70;
    edx = t71;
    wr32(sp0 - 0x78u, ebp);
    wr32(sp0 - 0x7cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x60u;
    t72 = cow_cdecl(g, COW_IMG(0x102a5d40u), 7, arg1, ebp, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return (t72 & 0xffffff00u) | (uint8_t)(t72 | 0xffu);
L_102a67bd: ;
    wr32(sp0 - 0x78u, arg1);
    wr32(sp0 - 0x7cu, rd32(COW_IMG(0x109a2864u)));
    g->eax = rd32(COW_IMG(0x109a2864u));
    t73 = rd32(COW_IMG(0x109a2864u));
    g->esp = sp0 - 0x70u;
    t74 = cow_cdecl(g, COW_IMG(0x102a67e0u), 3, t73, arg1, rd32(sp0 - 0x74u));
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return (t74 & 0xffffff00u) | (uint8_t)(t74 | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a64f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a64f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
