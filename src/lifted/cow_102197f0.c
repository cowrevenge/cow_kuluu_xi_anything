/* f_0x102197f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102197f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_9c;
    uint32_t loc_a0;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 172u);

    wr32(sp0 - 0x94u, in_ebx);
    wr32(sp0 - 0x98u, in_esi);
    t1 = rd32(arg1 + 0x8f0u);
    wr8(sp0 - 0x8du, 0u);
    wr8(sp0 - 0x8eu, 0u);
    wr16(self + 0x4cu, 1u);
    if (t1 == 0u)
    {
        eax = arg1;
        ecx = self;
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        edi = in_edi;
    }
    else
    {
        esi = t1;
        if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            if (eax == 2u) goto L_1021983a;
            if (eax != 3u) goto L_1021983f;
L_1021983a: ;
            eax = 1u;
        }
L_1021983f: ;
        wr32(sp0 - 0x9cu, eax);
        wr32(sp0 - 0xa0u, COW_IMG(0x10385ddcu));
        wr32(sp0 - 0xa4u, sp0 - 0x74u);
        g->ebx = (in_ebx & 0xffffff00u) | 0x80u;
        g->eax = eax;
        g->esp = sp0 - 0x90u;
        t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x74u, COW_IMG(0x10385ddcu), eax, in_esi, in_ebx);
        wr32(sp0 - 0x9cu, sp0 - 0x74u);
        g->edx = sp0 - 0x74u;
        g->esp = sp0 - 0x98u;
        t3 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x8cu, 1, sp0 - 0x74u);
        t4 = g->edx;
        wr32(sp0 - 0x9cu, COW_IMG(0x10385dd4u));
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x84u, 1, COW_IMG(0x10385dd4u));
        t6 = g->edx;
        wr32(sp0 - 0x9cu, COW_IMG(0x1036c108u));
        cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x7cu, 1, COW_IMG(0x1036c108u));
        wr32(sp0 - 0x9cu, sp0 - 0x8cu);
        wr32(sp0 - 0xa0u, sp0 - 0x84u);
        wr32(sp0 - 0xa4u, sp0 - 0x7cu);
        g->eax = sp0 - 0x8cu;
        g->edx = sp0 - 0x7cu;
        t7 = cow_thiscall(g, COW_IMG(0x1010d5e0u), esi, 3, sp0 - 0x7cu, sp0 - 0x84u, sp0 - 0x8cu);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x7cu, 0);
        t10 = g->edx;
        g->edx = t10;
        t11 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x84u, 0);
        t12 = g->edx;
        g->edx = t12;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x8cu, 0);
        t13 = g->ecx;
        t14 = g->edx;
        if (rd32(COW_IMG(0x104dfd98u)) == 0u)
        {
            ecx = t13;
            edx = t14;
            goto L_10219999;
        }
        eax = rd32(COW_IMG(0x104dfd98u));
        t15 = rd8(eax + 0x2cff4u);
        wr32(sp0 - 0x9cu, t15);
        wr32(sp0 - 0xa0u, COW_IMG(0x10385ddcu));
        wr32(sp0 - 0xa4u, sp0 - 0x74u);
        g->ebx = (in_ebx & 0xffffff00u) | 0x80u;
        g->edx = sp0 - 0x74u;
        g->esp = sp0 - 0x90u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x74u, COW_IMG(0x10385ddcu), t15, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
        t16 = g->edx;
        wr32(sp0 - 0x9cu, sp0 - 0x74u);
        g->eax = sp0 - 0x74u;
        g->edx = t16;
        g->esp = sp0 - 0x98u;
        t17 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x7cu, 1, sp0 - 0x74u);
        t18 = g->edx;
        wr32(sp0 - 0x9cu, COW_IMG(0x10385dc8u));
        g->edx = t18;
        t19 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x84u, 1, COW_IMG(0x10385dc8u));
        t20 = g->edx;
        wr32(sp0 - 0x9cu, COW_IMG(0x1036c108u));
        cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x8cu, 1, COW_IMG(0x1036c108u));
        wr32(sp0 - 0x9cu, sp0 - 0x7cu);
        wr32(sp0 - 0xa0u, sp0 - 0x84u);
        wr32(sp0 - 0xa4u, sp0 - 0x8cu);
        g->eax = sp0 - 0x8cu;
        g->edx = sp0 - 0x84u;
        t21 = cow_thiscall(g, COW_IMG(0x1010d5e0u), esi, 3, sp0 - 0x8cu, sp0 - 0x84u, sp0 - 0x7cu);
        t22 = g->edx;
        g->edx = t22;
        t23 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x8cu, 0);
        t24 = g->edx;
        g->edx = t24;
        t25 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x84u, 0);
        t26 = g->edx;
        g->edx = t26;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x7cu, 0);
        t27 = g->ecx;
        t28 = g->edx;
        if (rd32(COW_IMG(0x104dfd98u)) == 0u)
        {
            ecx = t27;
            edx = t28;
            goto L_10219999;
        }
        eax = rd32(COW_IMG(0x104dfd98u));
        ecx = t27;
        edx = t28;
        if (rd8(eax + 0x2cff4u) != 2u) goto L_10219999;
        if (rd32(rd32(COW_IMG(0x10456a28u)) + 0xcu) == 3u)
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0xcu) - 3u;
            ecx = rd32(COW_IMG(0x10456a28u));
            goto L_10219978;
        }
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0xcu) - 3u;
        ecx = rd32(COW_IMG(0x10456a28u));
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_10219961;
        }
        eax = eax - 1u;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, COW_IMG(0x10385ddcu));
        wr32(sp0 - 0xa4u, sp0 - 0x74u);
        ecx = sp0 - 0x74u;
        loc_9c = 0u;
L_102199a5: ;
        g->ebx = (in_ebx & 0xffffff00u) | 0x80u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        t29 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x74u, COW_IMG(0x10385ddcu), loc_9c, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
        t30 = g->edx;
        wr32(sp0 - 0x9cu, in_edi);
        wr32(sp0 - 0xa0u, sp0 - 0x74u);
        g->edx = t30;
        g->esp = sp0 - 0x9cu;
        t31 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x7cu, 1, sp0 - 0x74u);
        t32 = g->edx;
        wr32(sp0 - 0xa0u, COW_IMG(0x10385dc0u));
        g->edx = t32;
        t33 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x84u, 1, COW_IMG(0x10385dc0u));
        t34 = g->edx;
        wr32(sp0 - 0xa0u, COW_IMG(0x1036c108u));
        cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x8cu, 1, COW_IMG(0x1036c108u));
        wr32(sp0 - 0xa0u, sp0 - 0x7cu);
        wr32(sp0 - 0xa4u, sp0 - 0x84u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        g->eax = sp0 - 0x84u;
        g->edx = sp0 - 0x7cu;
        t35 = cow_thiscall(g, COW_IMG(0x1010d5e0u), esi, 3, sp0 - 0x8cu, sp0 - 0x84u, sp0 - 0x7cu);
        t36 = g->edx;
        g->edx = t36;
        t37 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x8cu, 0);
        t38 = g->edx;
        g->edx = t38;
        t39 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x84u, 0);
        t40 = g->edx;
        g->edx = t40;
        t41 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x7cu, 0);
        t42 = g->edx;
        wr32(sp0 - 0xa0u, COW_IMG(0x10385db0u));
        g->edx = t42;
        t43 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x8cu, 1, COW_IMG(0x10385db0u));
        t44 = g->edx;
        wr32(sp0 - 0xa0u, t43);
        g->edx = t44;
        t45 = cow_thiscall(g, COW_IMG(0x1010de90u), esi, 1, t43);
        t46 = g->edx;
        g->edx = t46;
        t47 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x8cu, 0);
        t48 = g->ecx;
        t49 = g->edx;
        if (t45 == 0u)
        {
            eax = t47;
            edx = t49;
            wr32(sp0 - 0xa0u, COW_IMG(0x10385da0u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x9cu;
            t52 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x8cu, 1, COW_IMG(0x10385da0u));
            t53 = g->edx;
            wr32(sp0 - 0xa0u, t52);
            g->edx = t53;
            t54 = cow_thiscall(g, COW_IMG(0x1010de90u), esi, 1, t52);
            t55 = g->edx;
            g->edx = t55;
            t56 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x8cu, 0);
            t57 = g->ecx;
            t58 = g->edx;
            if (t54 == 0u)
            {
                eax = t56;
                ecx = t57;
                edx = t58;
                ebx = (in_ebx & 0xffffff00u) | t54 != 0u;
                wr32(sp0 - 0xa0u, 0u);
                loc_a0 = 0u;
            }
            else
            {
                eax = t56;
                ecx = t57;
                edx = t58;
                ebx = (in_ebx & 0xffffff00u) | t54 != 0u;
                wr32(sp0 - 0xa0u, 2u);
                loc_a0 = 2u;
            }
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x9cu;
            t59 = cow_cdecl(g, COW_IMG(0x101133c0u), 1, loc_a0);
            t60 = g->edx;
            eax = t59;
            edx = t60;
        }
        else
        {
            eax = t47;
            ecx = t48;
            edx = t49;
            wr32(sp0 - 0xa0u, 1u);
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x101133c0u), 1, 1u);
            edi = sp0 - 0x54u;
            eax = 0u;
            ecx = 0x15u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0xa4u, sp0 - 0x54u);
            wr32(sp0 - 0x54u, eax);
            wr32(sp0 - 0x50u, eax);
            wr32(sp0 - 0x48u, 1u);
            wr16(sp0 - 0x4cu, 0x14u);
            g->ebx = (in_ebx & 0xffffff00u) | 0x80u;
            g->eax = eax;
            g->edx = sp0 - 0x54u;
            g->esp = sp0 - 0xa0u;
            t50 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            t51 = g->edx;
            eax = t50;
            edx = t51;
            ebx = (in_ebx & 0xffffff00u) | 0x80u;
        }
        wr32(sp0 - 0xa0u, COW_IMG(0x10385d90u));
        g->edx = edx;
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x8cu, 1, COW_IMG(0x10385d90u));
        t61 = g->edx;
        wr32(sp0 - 0xa0u, sp0 - 0x8cu);
        g->eax = sp0 - 0x8cu;
        g->edx = t61;
        t62 = cow_thiscall(g, COW_IMG(0x1010de90u), esi, 1, sp0 - 0x8cu);
        t63 = g->edx;
        g->edx = t63;
        t64 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x8cu, 0);
        t65 = g->edx;
        wr32(sp0 - 0xa0u, COW_IMG(0x10385d84u));
        g->edx = t65;
        t66 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x8cu, 1, COW_IMG(0x10385d84u));
        t67 = g->edx;
        wr32(sp0 - 0xa0u, sp0 - 0x8cu);
        g->edx = t67;
        t68 = cow_thiscall(g, COW_IMG(0x1010de90u), esi, 1, sp0 - 0x8cu);
        t69 = g->edx;
        wr8(sp0 - 0x8du, t68 != 0u);
        g->edx = t69;
        t70 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x8cu, 0);
        t71 = g->edx;
        wr32(sp0 - 0xa0u, COW_IMG(0x10385d78u));
        t72 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x8cu, 1, COW_IMG(0x10385d78u));
        wr32(sp0 - 0xa0u, sp0 - 0x8cu);
        g->edx = sp0 - 0x8cu;
        t73 = cow_thiscall(g, COW_IMG(0x1010de90u), esi, 1, sp0 - 0x8cu);
        t74 = g->edx;
        wr8(sp0 - 0x8eu, t73 != 0u);
        g->edx = t74;
        t75 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x8cu, 0);
        t76 = g->ecx;
        t77 = g->edx;
        eax = t75;
        ecx = t76;
        edx = t77;
        ebx = (ebx & 0xffffff00u) | t62 != 0u;
        edi = rd32(sp0 - 0x9cu);
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t78 = cow_stdcall(g, COW_IMG(0x1021bb70u), 0);
    t79 = g->ecx;
    t80 = g->edx;
    if ((uint8_t)ebx == 0u)
    {
        eax = t78;
        ecx = t79;
        edx = t80;
        goto L_10219b3e;
    }
    eax = t78;
    ecx = t79;
    edx = t80;
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x98u, COW_IMG(0x10376384u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x10376384u), 0u);
    g->ebx = in_ebx;
    g->edi = edi;
    return;
L_10219961: ;
    if ((rd8(ecx + 0x18u) & 0x80u) == 0u) goto L_10219974;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, COW_IMG(0x10385ddcu));
    wr32(sp0 - 0xa4u, sp0 - 0x74u);
    edx = sp0 - 0x74u;
    loc_9c = 0u;
    goto L_102199a5;
L_10219974: ;
    wr32(sp0 - 0x9cu, 2u);
    loc_9c = 2u;
L_1021999b: ;
    wr32(sp0 - 0xa0u, COW_IMG(0x10385ddcu));
    wr32(sp0 - 0xa4u, sp0 - 0x74u);
    eax = sp0 - 0x74u;
    goto L_102199a5;
L_10219978: ;
    if ((rd8(ecx + 0x18u) & 0x80u) == 0u)
    {
        wr32(sp0 - 0x9cu, 1u);
        wr32(sp0 - 0xa0u, COW_IMG(0x10385ddcu));
        wr32(sp0 - 0xa4u, sp0 - 0x74u);
        edx = sp0 - 0x74u;
        loc_9c = 1u;
    }
    else
    {
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, COW_IMG(0x10385ddcu));
        wr32(sp0 - 0xa4u, sp0 - 0x74u);
        ecx = sp0 - 0x74u;
        loc_9c = 0u;
    }
    goto L_102199a5;
L_10219999: ;
    wr32(sp0 - 0x9cu, 0u);
    loc_9c = 0u;
    goto L_1021999b;
L_10219b3e: ;
    if (rd8(sp0 - 0x8du) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x8du);
        goto L_10219b5e;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x8du);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x98u, COW_IMG(0x10376398u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x10376398u), 0u);
    g->ebx = in_ebx;
    g->edi = edi;
    return;
L_10219b5e: ;
    if (rd8(sp0 - 0x8eu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x8eu);
        wr32(sp0 - 0x94u, 0u);
        g->esp = sp0 - 0x90u;
        cow_cdecl(g, COW_IMG(0x100fc7b0u), 1, 0u);
    }
    g->ebx = in_ebx;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102197f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102197f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
