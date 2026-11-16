/* f_0x10256800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10256800(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    int64_t q1;
    int64_t q4;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == rd32(sp0 + 8u)) goto L_10256abb;
    eax = rd32(sp0 + 8u);
    edx = in_edx;
    ebp = rd32(sp0 + 0xcu);
    esi = rd32(sp0 + 0xcu) + 0x14u;
    edi = eax + 0x14u;
    loc_4 = self;
L_1025681f: ;
    wr32(sp0 + 8u, eax - 0x30u);
    wr32(sp0 + 0xcu, ebp - 0x30u);
    if (ebp - 0x30u == eax - 0x30u)
    {
        ebp = ebp - 0x30u;
        esi = esi - 0x30u;
        edi = edi - 0x30u;
    }
    else
    {
        ebp = ebp - 0x30u;
        esi = esi - 0x30u;
        edi = edi - 0x30u;
        if (rd32(edi - 0x10u) != 0u)
        {
            eax = rd32(edi - 0x10u);
            q1 = (int64_t)cow_muls(0x92492493u, rd32(edi - 0xcu) - eax);
            t2 = (uint32_t)((int32_t)(cow_qhi(q1) + rd32(edi - 0xcu) - eax) >> 4u);
            t3 = t2 + (t2 >> 0x1fu);
            eax = t2 >> 0x1fu;
            edx = t3;
            loc_4 = t3;
        }
        else
        {
            eax = rd32(edi - 0x10u);
            loc_4 = eax;
        }
        if (rd32(esi - 0x10u) != 0u)
        {
            ebx = rd32(esi - 0x10u);
            q4 = (int64_t)cow_muls(0x92492493u, rd32(esi - 0xcu) - ebx);
            t5 = (uint32_t)((int32_t)(cow_qhi(q4) + rd32(esi - 0xcu) - ebx) >> 4u);
            eax = (uint32_t)(q4);
            edx = t5 + (t5 >> 0x1fu);
        }
        else
        {
            ebx = rd32(esi - 0x10u);
            edx = 0u;
        }
        if (loc_4 > edx)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t13 = cow_thiscall(g, COW_IMG(0x102551f0u), rd32(sp0 + 8u), 0);
            t14 = g->edx;
            g->edx = t14;
            t15 = cow_thiscall(g, COW_IMG(0x102570c0u), ebp, 0);
            t16 = g->edx;
            if (t13 > t15)
            {
                ecx = ebp;
                t27 = rd32(esi - 0xcu);
                t28 = rd32(esi - 0x10u);
                g->eax = t28;
                g->edx = t27;
                g->esp = sp0 - 0x14u;
                t29 = cow_thiscall(g, COW_IMG(0x102553d0u), ecx, 2, t28, t27);
                t30 = g->edx;
                t31 = rd32(esi - 0x10u);
                g->edx = t30;
                t32 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t31);
                t33 = g->edx;
                t34 = rd32(sp0 + 8u);
                t35 = cow_thiscall(g, COW_IMG(0x102551f0u), t34, 0);
                t36 = g->ecx;
                if ((int32_t)t35 >= 0)
                {
                    eax = t35;
                    ecx = t36;
                }
                else
                {
                    ecx = t36;
                    eax = 0u;
                }
                g->eax = eax;
                g->esp = sp0 - 0xcu;
                t37 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, eax * 0x1cu, 1, 3, eax * 0x1cu, in_edi, in_esi);
                wr32(esi - 0x10u, t37);
                t38 = rd32(edi - 0xcu);
                t39 = rd32(edi - 0x10u);
                g->edi = edi;
                g->edx = t39;
                g->esp = sp0 - 0x14u;
                t40 = cow_stdcall(g, COW_IMG(0x10255840u), 3, t39, t38, t37);
                t41 = g->edx;
                wr32(esi - 0xcu, t40);
                wr32(esi - 8u, t40);
                edx = t41;
            }
            else
            {
                eax = t15;
                ecx = ebp;
                edx = t16;
                g->eax = eax;
                t17 = rd32(edi - 0x10u);
                g->esp = sp0 - 0x14u;
                t18 = cow_thiscall(g, COW_IMG(0x102551f0u), ecx, 0);
                t19 = rd32(esi - 0x10u);
                t20 = t17 + t18 * 0x1cu;
                g->edi = edi;
                cow_thiscall_cdecl(g, COW_IMG(0x10257110u), t19, 3, t17, t20, t19);
                t21 = rd32(esi - 0xcu);
                t22 = rd32(edi - 0xcu);
                g->edi = edi;
                g->eax = t22;
                g->edx = t21;
                t23 = cow_stdcall(g, COW_IMG(0x10255840u), 3, t20, t22, t21);
                t24 = g->edx;
                t25 = cow_thiscall(g, COW_IMG(0x102551f0u), rd32(sp0 + 8u), 0);
                t26 = t25 * 0x1cu + rd32(esi - 0x10u);
                wr32(esi - 0xcu, t26);
                edx = t25 * 8u - t25;
                loc_4 = t20;
            }
        }
        else
        {
            t6 = rd32(edi - 0xcu);
            if (rd32(edi - 0x10u) == t6)
            {
                eax = t6;
                ebp = ebx;
                loc_4 = t6;
                goto L_102568b3;
            }
            eax = t6;
            ebp = ebx;
            ebx = rd32(edi - 0x10u);
            loc_4 = t6;
L_1025689d: ;
            g->edi = edi;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10256d60u), ebp, 1, ebx);
            t7 = g->edx;
            if (ebx + 0x1cu != loc_4)
            {
                eax = loc_4;
                edx = t7;
                ebx = ebx + 0x1cu;
                ebp = ebp + 0x1cu;
                goto L_1025689d;
            }
            eax = loc_4;
            edx = t7;
            ebp = ebp + 0x1cu;
L_102568b3: ;
            if (ebp == rd32(esi - 0xcu)) goto L_102568ca;
            ebx = rd32(esi - 0xcu);
L_102568ba: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t8 = cow_thiscall(g, COW_IMG(0x10256ec0u), ebp, 1, 0u);
            t9 = g->edx;
            if (ebp + 0x1cu != ebx)
            {
                eax = t8;
                edx = t9;
                ebp = ebp + 0x1cu;
                goto L_102568ba;
            }
            eax = t8;
            edx = t9;
L_102568ca: ;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t10 = cow_thiscall(g, COW_IMG(0x102551f0u), rd32(sp0 + 8u), 0);
            t11 = t10 * 0x1cu + rd32(esi - 0x10u);
            t12 = rd32(sp0 + 0xcu);
            wr32(esi - 0xcu, t11);
            edx = t10 * 8u - t10;
            ebp = t12;
        }
    }
    if (esi - 4u != edi - 4u)
    {
        eax = esi - 4u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t42 = cow_thiscall(g, COW_IMG(0x10255220u), edi - 4u, 0);
        t43 = g->edx;
        g->edx = t43;
        t44 = cow_thiscall(g, COW_IMG(0x10255220u), esi - 4u, 0);
        t45 = g->edx;
        if (t42 > t44)
        {
            eax = t44;
            edx = t45;
            ebx = esi - 4u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t51 = cow_thiscall(g, COW_IMG(0x10255220u), edi - 4u, 0);
            t52 = g->edx;
            g->edx = t52;
            t53 = cow_thiscall(g, COW_IMG(0x102570f0u), ebx, 0);
            t54 = g->edx;
            if (t51 > t53)
            {
                eax = t53;
                edx = t54;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t64 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, rd32(esi));
                t65 = g->edx;
                t66 = cow_thiscall(g, COW_IMG(0x10255220u), edi - 4u, 0);
                t67 = g->ecx;
                if ((int32_t)t66 >= 0)
                {
                    eax = t66;
                    ecx = t67;
                }
                else
                {
                    ecx = t67;
                    eax = 0u;
                }
                g->eax = eax;
                g->esp = sp0 - 0xcu;
                t68 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, eax * 4u, 1, 3, eax * 4u, in_edi, in_esi);
                wr32(esi, t68);
                t69 = rd32(edi + 4u);
                g->edx = rd32(edi);
                t70 = rd32(edi);
                g->esp = sp0 - 0x14u;
                t71 = cow_stdcall(g, COW_IMG(0x10255d50u), 3, t70, t69, t68);
                t72 = g->edx;
                wr32(esi + 8u, t71);
                eax = t71;
                edx = t72;
            }
            else
            {
                eax = t53;
                edx = t54;
                g->eax = eax;
                g->edx = edx;
                t55 = rd32(edi);
                g->esp = sp0 - 0x14u;
                t56 = cow_thiscall(g, COW_IMG(0x10255220u), ebx, 0);
                t57 = g->edx;
                t58 = t55 + t56 * 4u;
                cow_cdecl(g, COW_IMG(0x10257290u), 3, t55, t58, rd32(esi));
                t59 = rd32(esi + 4u);
                t60 = rd32(edi + 4u);
                g->eax = t60;
                g->edx = t59;
                t61 = cow_stdcall(g, COW_IMG(0x10255d50u), 3, t58, t60, t59);
                t62 = g->edx;
                t63 = cow_thiscall(g, COW_IMG(0x10255220u), edi - 4u, 0);
                eax = t63 * 4u + rd32(esi);
                edx = rd32(esi);
                loc_4 = t58;
            }
        }
        else
        {
            t46 = rd32(edi + 4u);
            g->eax = t46;
            g->edx = rd32(esi);
            t47 = rd32(esi);
            g->esp = sp0 - 0x14u;
            t48 = cow_cdecl(g, COW_IMG(0x10257290u), 3, rd32(edi), t46, t47);
            t49 = g->edx;
            t50 = cow_thiscall(g, COW_IMG(0x10255220u), edi - 4u, 0);
            eax = t50 * 4u + rd32(esi);
            edx = rd32(esi);
        }
        t73 = rd32(sp0 + 0xcu);
        wr32(esi + 4u, eax);
        ebp = t73;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10256f20u), esi + 0xcu, 1, edi + 0xcu);
    t74 = g->edx;
    if (rd32(sp0 + 8u) != arg1)
    {
        eax = rd32(sp0 + 8u);
        edx = t74;
        goto L_1025681f;
    }
    edx = t74;
    g->edi = in_edi;
    g->edx = edx;
    return ebp;
L_10256abb: ;
    g->edi = in_edi;
    return rd32(sp0 + 0xcu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10256800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10256800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
