/* f_0x1024be00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1024be00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x106690b8u)) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        ebx = rd32(COW_IMG(0x103290f8u));
        esi = rd32(COW_IMG(0x106690b8u));
        edi = rd32(COW_IMG(0x103291c8u));
    }
    else
    {
        ebx = rd32(COW_IMG(0x103290f8u));
        esi = rd32(COW_IMG(0x106690b8u));
        edi = rd32(COW_IMG(0x103291c8u));
        if (rd32(esi + 4u) == 0u)
        {
            eax = in_eax;
            ecx = self;
            edx = in_edx;
        }
        else
        {
            t1 = rd32(esi + 0x38u);
            wr32(esi + 0x94u, 0xffffffffu);
            if (t1 == 0u)
            {
                ecx = self;
            }
            else
            {
                eax = t1;
                g->eax = eax;
                g->edx = in_edx;
                g->esp = sp0 - 0x10u;
                t2 = cow_thiscall(g, edi, self, 2, eax, 0u);
                t3 = g->ecx;
                t4 = g->edx;
                if (t2 == 0u)
                {
                    eax = t2;
                    edx = t4;
                    goto L_1024be49;
                }
                eax = t2;
                ecx = t3;
                edx = t4;
L_1024be3a: ;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, ebx, ecx, 1, 1u);
                t5 = g->ecx;
                t6 = g->edx;
                t7 = rd32(esi + 0x38u);
                g->eax = t7;
                g->edx = t6;
                t8 = cow_thiscall(g, edi, t5, 2, t7, 0u);
                t9 = g->ecx;
                t10 = g->edx;
                if (t8 != 0u)
                {
                    eax = t8;
                    ecx = t9;
                    edx = t10;
                    goto L_1024be3a;
                }
                eax = t8;
                edx = t10;
L_1024be49: ;
                t11 = rd32(esi + 0x38u);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(COW_IMG(0x10329104u)), t11, 1, t11);
                t12 = g->ecx;
                wr32(esi + 0x38u, 0u);
                ecx = t12;
            }
            t13 = rd32(esi + 4u);
            g->edx = rd32(t13);
            t14 = rd32(t13);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(t14 + 0x48u), ecx, 1, t13);
            t15 = g->ecx;
            t16 = g->edx;
            if (rd32(esi + 4u) == 0u)
            {
                ecx = t15;
                edx = t16;
            }
            else
            {
                eax = rd32(esi + 4u);
                edx = t16;
                g->edx = edx;
                t17 = rd32(eax);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(t17 + 8u), t17, 1, eax);
                t18 = g->ecx;
                t19 = g->edx;
                wr32(esi + 4u, 0u);
                ecx = t18;
                edx = t19;
            }
            if (rd32(esi) == 0u)
            {
                eax = rd32(esi);
            }
            else
            {
                eax = rd32(esi);
                g->eax = eax;
                g->edx = rd32(eax);
                t20 = rd32(eax);
                g->esp = sp0 - 0x10u;
                t21 = cow_thiscall(g, rd32(t20 + 8u), ecx, 1, eax);
                t22 = g->ecx;
                t23 = g->edx;
                wr32(esi, 0u);
                eax = t21;
                ecx = t22;
                edx = t23;
            }
            esi = rd32(COW_IMG(0x106690b8u));
        }
    }
    if (rd32(COW_IMG(0x106690c8u)) != 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x1024a740u), 2, 0xffffffffu, 0u);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
        esi = rd32(COW_IMG(0x106690c8u));
L_1024bea0: ;
        if (rd32(esi + 0x3cu) != 0u)
        {
            eax = rd32(esi + 0x3cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t26 = cow_thiscall(g, edi, ecx, 2, eax, 0u);
            t27 = g->ecx;
            t28 = g->edx;
            if (t26 == 0u)
            {
                eax = t26;
                edx = t28;
                goto L_1024bebe;
            }
            eax = t26;
            ecx = t27;
            edx = t28;
L_1024beaf: ;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, ebx, ecx, 1, 1u);
            t29 = g->ecx;
            t30 = g->edx;
            t31 = rd32(esi + 0x3cu);
            g->eax = t31;
            g->edx = t30;
            t32 = cow_thiscall(g, edi, t29, 2, t31, 0u);
            t33 = g->ecx;
            t34 = g->edx;
            if (t32 != 0u)
            {
                eax = t32;
                ecx = t33;
                edx = t34;
                goto L_1024beaf;
            }
            eax = t32;
            edx = t34;
L_1024bebe: ;
            t35 = rd32(esi + 0x3cu);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(COW_IMG(0x10329104u)), t35, 1, t35);
            t36 = g->ecx;
            wr32(esi + 0x3cu, 0u);
            ecx = t36;
        }
        if (rd32(esi + 4u) != 0u)
        {
            eax = rd32(esi + 4u);
            g->edx = rd32(eax);
            t37 = rd32(eax);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(t37 + 0x48u), ecx, 1, eax);
            t38 = g->ecx;
            t39 = g->edx;
            if (rd32(esi + 4u) == 0u)
            {
                ecx = t38;
            }
            else
            {
                eax = rd32(esi + 4u);
                edx = t39;
                t40 = rd32(eax);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(t40 + 8u), t40, 1, eax);
                t41 = g->ecx;
                wr32(esi + 4u, 0u);
                ecx = t41;
            }
            if (rd32(esi) != 0u)
            {
                eax = rd32(esi);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
                t42 = g->ecx;
                wr32(esi, 0u);
                ecx = t42;
            }
        }
        if (esi + 0xf4u < rd32(COW_IMG(0x106690c8u)) + 0x1310u)
        {
            edx = rd32(COW_IMG(0x106690c8u));
            esi = esi + 0xf4u;
            goto L_1024bea0;
        }
        edx = rd32(COW_IMG(0x106690c8u));
        if (edx != 0u)
        {
            if ((int32_t)(rd32(edx - 4u) - 1u) < 0)
            {
                eax = rd32(edx - 4u) - 1u;
                ecx = edx + rd32(edx - 4u) * 0xf4u;
                ebx = edx - 4u;
            }
            else
            {
                eax = rd32(edx - 4u) - 1u;
                ecx = edx + rd32(edx - 4u) * 0xf4u;
                ebx = edx - 4u;
                esi = ecx + 0x88u;
                edi = eax + 1u;
L_1024bf2e: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t43 = cow_thiscall(g, COW_IMG(0x102469b0u), esi - 0xf4u, 0);
                t44 = g->ecx;
                t45 = g->edx;
                if (edi != 1u)
                {
                    eax = t43;
                    edx = t45;
                    esi = esi - 0xf4u;
                    edi = edi - 1u;
                    goto L_1024bf2e;
                }
                eax = t43;
                ecx = t44;
                edx = t45;
            }
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
            t46 = g->ecx;
            t47 = g->edx;
            ecx = t46;
            edx = t47;
        }
        t48 = rd32(COW_IMG(0x106690b8u));
        wr32(COW_IMG(0x106690c8u), 0u);
        esi = t48;
    }
    if (esi != 0u)
    {
        if ((int32_t)(rd32(esi - 4u) - 1u) < 0)
        {
            eax = esi + rd32(esi - 4u) * 0x1c0u;
            ecx = rd32(esi - 4u) - 1u;
            ebx = esi - 4u;
        }
        else
        {
            eax = esi + rd32(esi - 4u) * 0x1c0u;
            ecx = rd32(esi - 4u) - 1u;
            ebx = esi - 4u;
            esi = eax + 0x58u;
            edi = ecx + 1u;
L_1024bf74: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t49 = cow_thiscall(g, COW_IMG(0x102469b0u), esi - 0x1c0u, 0);
            t50 = g->ecx;
            t51 = g->edx;
            if (edi != 1u)
            {
                eax = t49;
                edx = t51;
                esi = esi - 0x1c0u;
                edi = edi - 1u;
                goto L_1024bf74;
            }
            eax = t49;
            ecx = t50;
            edx = t51;
        }
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
        t52 = g->ecx;
        t53 = g->edx;
        wr32(COW_IMG(0x106690b8u), 0u);
        ecx = t52;
        edx = t53;
    }
    if (rd32(COW_IMG(0x106690e8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106690e8u));
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t54 = g->ecx;
        t55 = g->edx;
        ecx = t54;
        edx = t55;
    }
    if (rd32(COW_IMG(0x106690bcu)) != 0u)
    {
        eax = rd32(COW_IMG(0x106690bcu));
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t56 = g->edx;
        edx = t56;
    }
    if (rd32(COW_IMG(0x106690fcu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106690fcu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x106690fcu));
        esi = 0u;
L_1024bfc3: ;
        if (rd32(ecx + esi) == 0u)
        {
            eax = rd32(ecx + esi);
        }
        else
        {
            eax = rd32(ecx + esi);
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t57 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t58 = rd32(COW_IMG(0x106690fcu));
            wr32(esi + t58, 0u);
            eax = t57;
            ecx = rd32(COW_IMG(0x106690fcu));
            edx = t58;
        }
        if ((int32_t)(esi + 0xcu) < 264)
        {
            esi = esi + 0xcu;
            goto L_1024bfc3;
        }
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ecx);
        t59 = g->ecx;
        t60 = g->edx;
        ecx = t59;
        edx = t60;
    }
    if (rd32(COW_IMG(0x10669108u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10669108u));
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t61 = g->ecx;
        t62 = g->edx;
        ecx = t61;
        edx = t62;
    }
    if (rd32(COW_IMG(0x10669100u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10669100u));
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t63 = g->ecx;
        t64 = g->edx;
        ecx = t63;
        edx = t64;
    }
    if (rd32(COW_IMG(0x10669104u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10669104u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10669104u));
        g->eax = eax;
        g->esp = sp0;
        t65 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t66 = g->ecx;
        t67 = g->edx;
        eax = t65;
        ecx = t66;
        edx = t67;
    }
    g->esp = sp0;
    cow_thiscall(g, rd32(COW_IMG(0x103292f4u)), ecx, 1, COW_IMG(0x106690ccu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024be00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024be00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
