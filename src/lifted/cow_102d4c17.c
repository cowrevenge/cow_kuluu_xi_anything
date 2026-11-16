/* f_0x102d4c17 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102d4c17(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_4;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_esi);
    if (rd32(sp0 + 4u) == 0u) goto L_102d4c3c;
    esi = rd32(sp0 + 4u);
    wr32(sp0 - 0x74u, esi);
    g->eax = rd32(esi);
    g->edx = in_edx;
    t1 = rd32(esi);
    g->esp = sp0 - 0x70u;
    t2 = cow_thiscall(g, rd32(t1 + 0x28u), self, 1, esi);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x14u, t2);
    if (t2 == 3u)
    {
        ecx = t3;
        edx = t4;
        loc_14 = t2;
        goto L_102d4c46;
    }
    eax = t2 - 3u;
    ecx = t3;
    edx = t4;
    loc_14 = t2;
    if (eax == 1u) goto L_102d4c46;
    eax = eax - 1u;
    if (eax == 1u) goto L_102d4c46;
L_102d4c3c: ;
    eax = 0x8876086cu;
    edi = in_edi;
    loc_4 = in_ebp;
    loc_6c = in_ebx;
    loc_70 = in_esi;
L_102d4ef5: ;
    g->ebx = loc_6c;
    g->esi = loc_70;
    g->edi = edi;
    g->ebp = loc_4;
    return eax;
L_102d4c46: ;
    wr32(sp0 - 0x74u, in_edi);
    wr32(sp0 - 0x78u, 5u);
    wr32(sp0 - 0x1cu, esi);
    if (rd32(sp0 + 0x10u) != 0xffffffffu)
    {
        loc_74 = in_edi;
        loc_1c = esi;
    }
    else
    {
        loc_1c = esi;
        if (loc_14 == 3u) goto L_102d4ce3;
        eax = loc_14 - 3u;
        if (eax == 1u) goto L_102d4c86;
        eax = eax - 1u;
        if (eax != 1u) goto L_102d4d08;
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x7cu, 0u);
        wr32(sp0 - 0x80u, loc_1c);
        g->edx = sp0 - 0x48u;
        g->esp = sp0 - 0x74u;
        cow_thiscall(g, rd32(rd32(loc_1c) + 0x38u), rd32(loc_1c), 3, loc_1c, 0u, sp0 - 0x48u);
        t5 = g->edx;
        if ((rd32(sp0 - 0x30u) & rd32(sp0 - 0x30u) - 1u) != 0u)
        {
            ecx = rd32(sp0 - 0x30u) - 1u;
            edx = t5;
            goto L_102d4cb2;
        }
        edx = t5;
        eax = rd32(sp0 - 0x2cu);
L_102d4cab: ;
        if ((eax & eax - 1u) == 0u)
        {
            ecx = eax - 1u;
            goto L_102d4d0d;
        }
        ecx = eax - 1u;
L_102d4cb2: ;
        wr32(sp0 + 0x10u, 0x80004u);
        loc_74 = in_edi;
    }
L_102d4cb9: ;
    if (loc_14 == 5u)
    {
        wr8(sp0 + 0x12u, rd8(sp0 + 0x12u) | 7u);
    }
    wr32(sp0 - 0x78u, esi);
    g->eax = rd32(esi);
    g->edx = edx;
    t8 = rd32(esi);
    g->esp = sp0 - 0x74u;
    t9 = cow_thiscall(g, rd32(t8 + 0x34u), ecx, 1, esi);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x24u, t9);
    if (rd32(sp0 + 0xcu) != 0xffffffffu)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        loc_24 = t9;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        loc_24 = t9;
        wr32(sp0 + 0xcu, 0u);
    }
    if (rd32(sp0 + 0xcu) < eax)
    {
        t12 = rd32(sp0 - 0x14u);
        wr32(sp0 + 4u, 0u);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 0x10u, 0u);
        t13 = ((t12 != 5u) - 1u & 5u) + 1u;
        wr32(sp0 - 0x28u, t13);
        if ((uint8_t)rd32(sp0 + 0x10u) == 2u)
        {
            loc_28 = t13;
            goto L_102d4d41;
        }
        eax = (uint8_t)rd32(sp0 + 0x10u);
        loc_28 = t13;
        wr32(sp0 - 0x20u, 0u);
        if (eax != 5u)
        {
            loc_20 = 0u;
            goto L_102d4d48;
        }
L_102d4d41: ;
        wr32(sp0 - 0x20u, 1u);
        loc_20 = 1u;
L_102d4d48: ;
        wr32(sp0 - 0x18u, 0u);
        if (loc_28 == 0u) goto L_102d4eb3;
        esi = rd32(sp0 + 0x10u);
        loc_18 = 0u;
L_102d4d57: ;
        if (rd32(sp0 - 0x14u) == 3u) goto L_102d4d7f;
        eax = rd32(sp0 - 0x14u) - 3u;
        if (eax == 1u) goto L_102d4d7a;
        eax = eax - 1u;
        if (eax != 1u) goto L_102d4d91;
        wr32(sp0 - 0x78u, sp0 + 4u);
        t14 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x7cu, t14);
        wr32(sp0 - 0x80u, loc_18);
        t15 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x84u, t15);
        g->eax = t15;
        g->edx = sp0 + 4u;
        t16 = rd32(rd32(sp0 - 0x1cu));
        g->esp = sp0 - 0x74u;
        t17 = cow_thiscall(g, rd32(t16 + 0x3cu), t16, 4, t15, loc_18, t14, sp0 + 4u);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
L_102d4d8f: ;
        esi = eax;
L_102d4d91: ;
        if ((int32_t)esi < 0) goto L_102d4eb5;
        edi = rd32(sp0 + 0xcu);
L_102d4e7a: ;
        if (edi + 1u < loc_24)
        {
            edi = edi + 1u;
            goto L_102d4da1;
        }
        if (rd32(sp0 + 4u) != 0u)
        {
            eax = rd32(sp0 + 4u);
            wr32(sp0 - 0x78u, eax);
            g->edx = edx;
            t26 = rd32(eax);
            g->esp = sp0 - 0x74u;
            cow_thiscall(g, rd32(t26 + 8u), t26, 1, eax);
            t27 = g->ecx;
            t28 = g->edx;
            wr32(sp0 + 4u, 0u);
            ecx = t27;
            edx = t28;
        }
        if (0u)
        {
            wr32(sp0 - 0x78u, 0u);
            g->edx = edx;
            t29 = rd32(0u);
            g->esp = sp0 - 0x74u;
            cow_thiscall(g, rd32(t29 + 8u), t29, 1, 0u);
            t30 = g->ecx;
            t31 = g->edx;
            wr32(sp0 - 0xcu, 0u);
            ecx = t30;
            edx = t31;
        }
        wr32(sp0 - 0x18u, loc_18 + 1u);
        if (loc_18 + 1u < loc_28)
        {
            loc_18 = loc_18 + 1u;
            goto L_102d4d57;
        }
L_102d4eb3: ;
        esi = 0u;
L_102d4eb5: ;
        if (rd32(sp0 + 4u) != 0u)
        {
            eax = rd32(sp0 + 4u);
            wr32(sp0 - 0x78u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x74u;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t63 = g->edx;
            wr32(sp0 + 4u, 0u);
            edx = t63;
        }
        if (0u)
        {
            wr32(sp0 - 0x78u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x74u;
            cow_thiscall(g, rd32(rd32(0u) + 8u), rd32(0u), 1, 0u);
            t64 = g->edx;
            wr32(sp0 - 0xcu, 0u);
            edx = t64;
        }
        if (0u)
        {
            wr32(sp0 - 0x78u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x74u;
            cow_thiscall(g, rd32(rd32(0u) + 8u), rd32(0u), 1, 0u);
            t65 = g->edx;
            wr32(sp0 - 8u, 0u);
            edx = t65;
        }
        if (0u)
        {
            wr32(sp0 - 0x78u, 0u);
            g->esp = sp0 - 0x74u;
            cow_thiscall(g, rd32(rd32(0u) + 8u), rd32(0u), 1, 0u);
        }
        eax = esi;
    }
    else
    {
        eax = 0x8876086cu;
    }
    edi = rd32(sp0 - 0x74u);
    goto L_102d4ef5;
L_102d4c86: ;
    wr32(sp0 - 0x78u, sp0 - 0x68u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, loc_1c);
    g->edx = sp0 - 0x68u;
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(rd32(loc_1c) + 0x38u), rd32(loc_1c), 3, loc_1c, 0u, sp0 - 0x68u);
    t6 = g->edx;
    if ((rd32(sp0 - 0x54u) & rd32(sp0 - 0x54u) - 1u) != 0u)
    {
        ecx = rd32(sp0 - 0x54u) - 1u;
        edx = t6;
        goto L_102d4cb2;
    }
    edx = t6;
    if ((rd32(sp0 - 0x50u) & rd32(sp0 - 0x50u) - 1u) != 0u)
    {
        ecx = rd32(sp0 - 0x50u) - 1u;
        goto L_102d4cb2;
    }
    eax = rd32(sp0 - 0x4cu);
    goto L_102d4cab;
L_102d4ce3: ;
    wr32(sp0 - 0x78u, sp0 - 0x48u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, loc_1c);
    g->edx = sp0 - 0x48u;
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(rd32(loc_1c) + 0x38u), rd32(loc_1c), 3, loc_1c, 0u, sp0 - 0x48u);
    t7 = g->edx;
    if ((rd32(sp0 - 0x30u) & rd32(sp0 - 0x30u) - 1u) != 0u)
    {
        ecx = rd32(sp0 - 0x30u) - 1u;
        edx = t7;
        goto L_102d4d05;
    }
    edx = t7;
    if ((rd32(sp0 - 0x2cu) & rd32(sp0 - 0x2cu) - 1u) == 0u)
    {
        ecx = rd32(sp0 - 0x2cu) - 1u;
        goto L_102d4d0d;
    }
    ecx = rd32(sp0 - 0x2cu) - 1u;
L_102d4d05: ;
    wr32(sp0 + 0x10u, 0u);
L_102d4d08: ;
    if (rd32(sp0 + 0x10u) == 0u) goto L_102d4cb2;
    loc_74 = in_edi;
L_102d4d0d: ;
    wr32(sp0 + 0x10u, 5u);
    goto L_102d4cb9;
L_102d4d7a: ;
    edx = sp0 - 0xcu;
L_102d4d82: ;
    wr32(sp0 - 0x78u, edx);
    t20 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x7cu, t20);
    t21 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x80u, t21);
    g->eax = t21;
    g->edx = edx;
    t22 = rd32(rd32(sp0 - 0x1cu));
    g->esp = sp0 - 0x74u;
    t23 = cow_thiscall(g, rd32(t22 + 0x3cu), t22, 3, t21, t20, edx);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    goto L_102d4d8f;
L_102d4d7f: ;
    edx = sp0 + 4u;
    goto L_102d4d82;
L_102d4da1: ;
    if (rd32(sp0 - 0x14u) == 3u) goto L_102d4dc7;
    eax = rd32(sp0 - 0x14u) - 3u;
    if (eax == 1u) goto L_102d4dc2;
    eax = eax - 1u;
    if (eax != 1u) goto L_102d4dd7;
    wr32(sp0 - 0x78u, sp0 - 8u);
    wr32(sp0 - 0x7cu, edi);
    wr32(sp0 - 0x80u, loc_18);
    t32 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x84u, t32);
    g->eax = t32;
    g->edx = sp0 - 8u;
    t33 = rd32(rd32(sp0 - 0x1cu));
    g->esp = sp0 - 0x74u;
    t34 = cow_thiscall(g, rd32(t33 + 0x3cu), t33, 4, t32, loc_18, edi, sp0 - 8u);
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
L_102d4dd5: ;
    esi = eax;
L_102d4dd7: ;
    if ((int32_t)esi < 0) goto L_102d4eb5;
    if (rd32(sp0 - 0x14u) == 3u) goto L_102d4ded;
    eax = rd32(sp0 - 0x14u) - 3u;
    if (eax == 1u) goto L_102d4e41;
    eax = eax - 1u;
    if (eax != 1u) goto L_102d4e06;
L_102d4ded: ;
    wr32(sp0 - 0x78u, 0u);
    t46 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x7cu, t46);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, arg2);
    t47 = rd32(sp0 + 4u);
    wr32(sp0 - 0x88u, t47);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x90u, arg2);
    wr32(sp0 - 0x94u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t48 = cow_stdcall(g, COW_IMG(0x102d4535u), 8, 0u, arg2, 0u, t47, arg2, 0u, t46, 0u);
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
L_102d4e04: ;
    esi = eax;
L_102d4e06: ;
    if ((int32_t)esi < 0) goto L_102d4eb5;
    if (loc_20 == 0u) goto L_102d4e5a;
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        wr32(sp0 - 0x78u, eax);
        g->edx = edx;
        t51 = rd32(eax);
        g->esp = sp0 - 0x74u;
        cow_thiscall(g, rd32(t51 + 8u), t51, 1, eax);
        t52 = g->ecx;
        t53 = g->edx;
        wr32(sp0 + 4u, 0u);
        ecx = t52;
        edx = t53;
    }
    if (0u)
    {
        wr32(sp0 - 0x78u, 0u);
        g->edx = edx;
        t54 = rd32(0u);
        g->esp = sp0 - 0x74u;
        cow_thiscall(g, rd32(t54 + 8u), t54, 1, 0u);
        t55 = g->ecx;
        t56 = g->edx;
        ecx = t55;
        edx = t56;
    }
    wr32(sp0 + 4u, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
L_102d4e77: ;
    wr32(sp0 - 0x10u, 0u);
    goto L_102d4e7a;
L_102d4dc2: ;
    edx = sp0 - 0x10u;
L_102d4dca: ;
    wr32(sp0 - 0x78u, edx);
    wr32(sp0 - 0x7cu, edi);
    t37 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x80u, t37);
    g->eax = t37;
    g->edx = edx;
    t38 = rd32(rd32(sp0 - 0x1cu));
    g->esp = sp0 - 0x74u;
    t39 = cow_thiscall(g, rd32(t38 + 0x3cu), t38, 3, t37, edi, edx);
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    goto L_102d4dd5;
L_102d4dc7: ;
    edx = sp0 - 8u;
    goto L_102d4dca;
L_102d4e41: ;
    wr32(sp0 - 0x78u, 0u);
    t42 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x7cu, t42);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, arg2);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x90u, arg2);
    wr32(sp0 - 0x94u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t43 = cow_stdcall(g, COW_IMG(0x102d4797u), 8, 0u, arg2, 0u, 0u, arg2, 0u, t42, 0u);
    t44 = g->ecx;
    t45 = g->edx;
    eax = t43;
    ecx = t44;
    edx = t45;
    goto L_102d4e04;
L_102d4e5a: ;
    if (0u)
    {
        wr32(sp0 - 0x78u, 0u);
        g->edx = edx;
        t57 = rd32(0u);
        g->esp = sp0 - 0x74u;
        cow_thiscall(g, rd32(t57 + 8u), t57, 1, 0u);
        t58 = g->ecx;
        t59 = g->edx;
        wr32(sp0 - 8u, 0u);
        ecx = t58;
        edx = t59;
    }
    if (1u) goto L_102d4e7a;
    wr32(sp0 - 0x78u, 0u);
    g->edx = edx;
    t60 = rd32(0u);
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(t60 + 8u), t60, 1, 0u);
    t61 = g->ecx;
    t62 = g->edx;
    ecx = t61;
    edx = t62;
    goto L_102d4e77;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d4c17(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d4c17(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
