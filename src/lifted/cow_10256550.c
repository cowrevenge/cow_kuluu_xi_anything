/* f_0x10256550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10256550(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(sp0 + 4u) != arg2)
    {
        ebp = rd32(sp0 + 4u);
        edx = in_edx;
        ebx = rd32(sp0 + 0xcu);
        esi = ebp + 0x14u;
L_1025656b: ;
        if (ebp != ebx)
        {
            if (rd32(ebx + 4u) != 0u)
            {
                eax = rd32(ebx + 4u);
                q1 = (int64_t)cow_muls(0x92492493u, rd32(ebx + 8u) - eax);
                t2 = (uint32_t)((int32_t)(cow_qhi(q1) + rd32(ebx + 8u) - eax) >> 4u);
                t3 = t2 + (t2 >> 0x1fu);
                wr32(sp0 + 0xcu, t3);
                eax = t2 >> 0x1fu;
                edx = t3;
            }
            else
            {
                eax = rd32(ebx + 4u);
                wr32(sp0 + 0xcu, eax);
            }
            if (rd32(esi - 0x10u) != 0u)
            {
                edi = rd32(esi - 0x10u);
                q4 = (int64_t)cow_muls(0x92492493u, rd32(esi - 0xcu) - edi);
                t5 = (uint32_t)((int32_t)(cow_qhi(q4) + rd32(esi - 0xcu) - edi) >> 4u);
                eax = (uint32_t)(q4);
                edx = t5 + (t5 >> 0x1fu);
            }
            else
            {
                edi = rd32(esi - 0x10u);
                edx = 0u;
            }
            if (rd32(sp0 + 0xcu) > edx)
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t14 = cow_thiscall(g, COW_IMG(0x102570c0u), ebp, 0);
                t15 = g->edx;
                g->edx = t15;
                t16 = cow_thiscall(g, COW_IMG(0x102551f0u), ebx, 0);
                t17 = g->edx;
                if (t16 > t14)
                {
                    ecx = ebp;
                    edi = t14;
                    t29 = rd32(esi - 0xcu);
                    t30 = rd32(esi - 0x10u);
                    g->eax = t30;
                    g->edx = t29;
                    g->esp = sp0 - 0x10u;
                    t31 = cow_thiscall(g, COW_IMG(0x102553d0u), ecx, 2, t30, t29);
                    t32 = g->edx;
                    t33 = rd32(esi - 0x10u);
                    g->edx = t32;
                    t34 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t33);
                    t35 = g->edx;
                    t36 = cow_thiscall(g, COW_IMG(0x102551f0u), ebx, 0);
                    t37 = g->ecx;
                    if ((int32_t)t36 >= 0)
                    {
                        eax = t36;
                        ecx = t37;
                    }
                    else
                    {
                        ecx = t37;
                        eax = 0u;
                    }
                    g->eax = eax;
                    g->esp = sp0 - 8u;
                    t38 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, eax * 0x1cu, in_edi, in_esi);
                    wr32(esi - 0x10u, t38);
                    t39 = rd32(ebx + 8u);
                    t40 = rd32(ebx + 4u);
                    g->edi = edi;
                    g->edx = t40;
                    g->esp = sp0 - 0x10u;
                    t41 = cow_stdcall(g, COW_IMG(0x10255840u), 3, t40, t39, t38);
                    t42 = g->edx;
                    wr32(esi - 0xcu, t41);
                    wr32(esi - 8u, t41);
                    edx = t42;
                }
                else
                {
                    eax = t16;
                    ecx = ebp;
                    edx = t17;
                    g->eax = eax;
                    t18 = rd32(ebx + 4u);
                    g->esp = sp0 - 0x10u;
                    t19 = cow_thiscall(g, COW_IMG(0x102551f0u), ecx, 0);
                    t20 = rd32(esi - 0x10u);
                    t21 = t18 + t19 * 0x1cu;
                    wr32(sp0 + 0xcu, t21);
                    g->edi = t18;
                    cow_thiscall_cdecl(g, COW_IMG(0x10257110u), t20, 3, t18, t21, t20);
                    t22 = rd32(esi - 0xcu);
                    t23 = rd32(ebx + 8u);
                    t24 = rd32(sp0 + 0xcu);
                    g->edi = t18;
                    g->eax = t23;
                    g->edx = t22;
                    t25 = cow_stdcall(g, COW_IMG(0x10255840u), 3, t24, t23, t22);
                    t26 = g->edx;
                    t27 = cow_thiscall(g, COW_IMG(0x102551f0u), ebx, 0);
                    t28 = t27 * 0x1cu + rd32(esi - 0x10u);
                    wr32(esi - 0xcu, t28);
                    edx = t27 * 8u - t27;
                }
            }
            else
            {
                t6 = rd32(ebx + 8u);
                t7 = rd32(ebx + 4u);
                wr32(sp0 + 0xcu, t6);
                if (t7 == t6)
                {
                    eax = t6;
                    ebp = edi;
                    goto L_102565eb;
                }
                eax = t6;
                ebp = edi;
                edi = t7;
L_102565d5: ;
                g->edi = edi;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x10256d60u), ebp, 1, edi);
                t8 = g->edx;
                if (edi + 0x1cu != rd32(sp0 + 0xcu))
                {
                    eax = rd32(sp0 + 0xcu);
                    edx = t8;
                    ebp = ebp + 0x1cu;
                    edi = edi + 0x1cu;
                    goto L_102565d5;
                }
                eax = rd32(sp0 + 0xcu);
                edx = t8;
                ebp = ebp + 0x1cu;
L_102565eb: ;
                if (ebp == rd32(esi - 0xcu)) goto L_10256602;
                edi = rd32(esi - 0xcu);
L_102565f2: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_thiscall(g, COW_IMG(0x10256ec0u), ebp, 1, 0u);
                t10 = g->edx;
                if (ebp + 0x1cu != edi)
                {
                    eax = t9;
                    edx = t10;
                    ebp = ebp + 0x1cu;
                    goto L_102565f2;
                }
                eax = t9;
                edx = t10;
L_10256602: ;
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t11 = cow_thiscall(g, COW_IMG(0x102551f0u), ebx, 0);
                t12 = t11 * 0x1cu + rd32(esi - 0x10u);
                t13 = rd32(sp0 + 4u);
                wr32(esi - 0xcu, t12);
                edx = t11 * 8u - t11;
                ebp = t13;
            }
        }
        if (esi - 4u != ebx + 0x10u)
        {
            eax = esi - 4u;
            edi = ebx + 0x10u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t43 = cow_thiscall(g, COW_IMG(0x10255220u), esi - 4u, 0);
            t44 = g->edx;
            g->edx = t44;
            t45 = cow_thiscall(g, COW_IMG(0x10255220u), edi, 0);
            t46 = g->edx;
            if (t45 > t43)
            {
                eax = t45;
                edx = t46;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t53 = cow_thiscall(g, COW_IMG(0x102570f0u), esi - 4u, 0);
                t54 = g->edx;
                g->edx = t54;
                t55 = cow_thiscall(g, COW_IMG(0x10255220u), edi, 0);
                t56 = g->ecx;
                t57 = g->edx;
                if (t55 > t53)
                {
                    ecx = t56;
                    edx = t57;
                    g->eax = rd32(esi);
                    g->edx = edx;
                    t69 = rd32(esi);
                    g->esp = sp0 - 0x10u;
                    t70 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t69);
                    t71 = g->edx;
                    g->edx = t71;
                    t72 = cow_thiscall(g, COW_IMG(0x10255220u), edi, 0);
                    t73 = g->edx;
                    if ((int32_t)t72 >= 0)
                    {
                        eax = t72;
                        edx = t73;
                    }
                    else
                    {
                        edx = t73;
                        eax = 0u;
                    }
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t74 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, eax * 4u, in_edi, in_esi);
                    t75 = g->edx;
                    wr32(esi, t74);
                    t76 = rd32(edi + 8u);
                    t77 = rd32(edi + 4u);
                    g->edx = t75;
                    g->esp = sp0 - 0x10u;
                    t78 = cow_stdcall(g, COW_IMG(0x10255d50u), 3, t77, t76, t74);
                    t79 = g->edx;
                    wr32(esi + 4u, t78);
                    wr32(esi + 8u, t78);
                    edx = t79;
                }
                else
                {
                    eax = t55;
                    edx = t57;
                    g->eax = eax;
                    g->esp = sp0 - 0x10u;
                    t58 = cow_thiscall(g, COW_IMG(0x10255220u), esi - 4u, 0);
                    t59 = t58 * 4u + rd32(edi + 4u);
                    t60 = rd32(edi + 4u);
                    t61 = rd32(esi);
                    wr32(sp0 + 0xcu, t59);
                    cow_cdecl(g, COW_IMG(0x10257290u), 3, t60, t59, t61);
                    t62 = rd32(esi + 4u);
                    t63 = rd32(edi + 8u);
                    t64 = rd32(sp0 + 0xcu);
                    g->eax = t62;
                    g->edx = t64;
                    t65 = cow_stdcall(g, COW_IMG(0x10255d50u), 3, t64, t63, t62);
                    t66 = g->edx;
                    t67 = cow_thiscall(g, COW_IMG(0x10255220u), edi, 0);
                    t68 = t67 * 4u + rd32(esi);
                    wr32(esi + 4u, t68);
                    edx = t68;
                }
            }
            else
            {
                t47 = rd32(edi + 8u);
                t48 = rd32(edi + 4u);
                g->eax = t48;
                g->edx = t47;
                g->esp = sp0 - 0x10u;
                t49 = cow_cdecl(g, COW_IMG(0x10257290u), 3, t48, t47, rd32(esi));
                t50 = g->edx;
                t51 = cow_thiscall(g, COW_IMG(0x10255220u), edi, 0);
                t52 = t51 * 4u + rd32(esi);
                wr32(esi + 4u, t52);
                edx = t52;
            }
            ebp = rd32(sp0 + 4u);
        }
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10256f20u), esi + 0xcu, 1, ebx + 0x20u);
        t80 = g->edx;
        wr32(sp0 + 4u, ebp + 0x30u);
        if (ebp + 0x30u != arg2)
        {
            edx = t80;
            ebp = ebp + 0x30u;
            esi = esi + 0x30u;
            goto L_1025656b;
        }
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10256550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10256550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
