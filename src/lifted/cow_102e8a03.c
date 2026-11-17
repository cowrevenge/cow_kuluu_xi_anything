/* f_0x102e8a03 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e8a03(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t5;
    uint32_t t6;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 8u, 0u);
    if (rd32(self + 0x460u) != 1u) goto L_102e8a2c;
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    wr32(sp0 - 0x3cu, 0u);
    t1 = rd32(self + 0x34u);
    wr32(sp0 - 0x40u, t1);
    g->edx = sp0 - 0x28u;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x34u)) + 0x38u), rd32(rd32(self + 0x34u)), 3, t1, 0u, sp0 - 0x28u);
    t2 = g->edx;
    edx = t2;
L_102e8a7b: ;
    t19 = rd32(sp0 - 0x20u) & 1u;
    t20 = rd32(sp0 - 0x20u);
    wr32(self + 0x46cu, t19);
    if (t20 & 1u) goto L_102e8ab4;
    if (rd32(self + 0x20u) != 0u) goto L_102e8aad;
    wr32(sp0 - 0x38u, self + 0x20u);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 0u);
    t21 = rd32(self + 0x10u);
    wr32(sp0 - 0x44u, t21);
    t22 = rd32(self + 0xcu);
    wr32(sp0 - 0x48u, t22);
    wr32(sp0 - 0x4cu, t22);
    t23 = rd32(self + 8u);
    wr32(sp0 - 0x50u, t23);
    g->eax = t23;
    g->edx = rd32(rd32(self + 8u));
    t24 = rd32(rd32(self + 8u));
    g->esp = sp0 - 0x34u;
    t25 = cow_thiscall(g, rd32(t24 + 0x64u), t22, 7, t23, t22, t22, t21, 0u, 1u, self + 0x20u);
    t26 = g->edx;
    if ((int32_t)t25 < 0)
    {
        eax = t25;
        goto L_102e8b53;
    }
    edx = t26;
L_102e8aad: ;
    t27 = rd32(self + 0x20u);
    wr32(sp0 - 8u, t27);
    loc_8 = t27;
L_102e8ad9: ;
    if (rd32(self + 0x24u) != 0u) goto L_102e8afc;
    if (rd32(self + 0x14u) == 0u) goto L_102e8afc;
    wr32(sp0 - 0x38u, self + 0x24u);
    wr32(sp0 - 0x3cu, 0u);
    t32 = rd32(self + 0x18u);
    wr32(sp0 - 0x40u, t32);
    t33 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t33);
    wr32(sp0 - 0x48u, t33);
    t34 = rd32(self + 8u);
    wr32(sp0 - 0x4cu, t34);
    g->eax = t34;
    g->edx = rd32(rd32(self + 8u));
    t35 = rd32(rd32(self + 8u));
    g->esp = sp0 - 0x34u;
    t36 = cow_thiscall(g, rd32(t35 + 0x68u), t33, 6, t34, t33, t33, t32, 0u, self + 0x24u);
    t37 = g->edx;
    if ((int32_t)t36 < 0)
    {
        eax = t36;
        goto L_102e8b53;
    }
    edx = t37;
    loc_8 = rd32(sp0 - 8u);
L_102e8afc: ;
    t38 = rd32(self + 0x24u);
    wr32(sp0 - 0x38u, t38);
    wr32(sp0 - 0x3cu, loc_8);
    t39 = rd32(self + 8u);
    wr32(sp0 - 0x40u, t39);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x7cu), rd32(rd32(self + 8u)), 3, t39, loc_8, t38);
    wr32(sp0 - 0x38u, self + 0x474u);
    t40 = rd32(self + 8u);
    wr32(sp0 - 0x3cu, t40);
    g->edx = self + 0x474u;
    cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0xa0u), rd32(rd32(self + 8u)), 2, t40, self + 0x474u);
    t41 = g->edx;
    if (rd32(self + 0x46cu) == 0u)
    {
        edx = t41;
    }
    else
    {
        edx = t41;
        t42 = rd32(sp0 - 8u);
        wr32(sp0 - 0x38u, t42);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        cow_thiscall(g, rd32(rd32(rd32(sp0 - 8u)) + 8u), rd32(rd32(sp0 - 8u)), 1, t42);
        t43 = g->edx;
        edx = t43;
    }
    t44 = rd32(self + 8u);
    wr32(sp0 - 0x38u, t44);
    g->eax = t44;
    g->esp = sp0 - 0x34u;
    t45 = cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x88u), rd32(rd32(self + 8u)), 1, t44);
    if ((int32_t)t45 < 0)
    {
        eax = t45;
    }
    else
    {
        wr32(self + 0x464u, arg1);
        wr32(self + 0x468u, 1u);
        eax = 0u;
    }
L_102e8b53: ;
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 4u);
    return eax;
L_102e8a2c: ;
    if (rd32(self + 0x30u) != 0u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_2c = in_ebx;
        loc_30 = in_esi;
        loc_34 = in_edi;
        loc_8 = 0u;
        goto L_102e8a6e;
    }
    wr32(sp0 - 0x38u, self + 0x30u);
    wr32(sp0 - 0x3cu, 0u);
    t3 = rd32(self + 0x10u);
    wr32(sp0 - 0x40u, t3);
    wr32(sp0 - 0x44u, 1u);
    t4 = rd32(self + 0x1cu);
    wr32(sp0 - 0x48u, t4);
    t5 = rd32(self + 0xcu);
    wr32(sp0 - 0x4cu, t5);
    wr32(sp0 - 0x50u, t5);
    t6 = rd32(self + 8u);
    wr32(sp0 - 0x54u, t6);
    g->eax = t6;
    g->edx = rd32(rd32(self + 8u));
    t7 = rd32(rd32(self + 8u));
    g->esp = sp0 - 0x34u;
    t8 = cow_thiscall(g, rd32(t7 + 0x50u), t5, 8, t6, t5, t5, t4, 1u, t3, 0u, self + 0x30u);
    t9 = g->edx;
    if ((int32_t)t8 >= 0)
    {
        edx = t9;
        loc_4 = in_ebp;
        loc_2c = in_ebx;
        loc_30 = in_esi;
        loc_34 = in_edi;
        loc_8 = 0u;
        goto L_102e8a6e;
    }
    wr32(sp0 - 0x38u, self + 0x30u);
    wr32(sp0 - 0x3cu, 0u);
    t10 = rd32(self + 0x10u);
    wr32(sp0 - 0x40u, t10);
    wr32(sp0 - 0x44u, 0u);
    t11 = rd32(self + 0x1cu);
    wr32(sp0 - 0x48u, t11);
    t12 = rd32(self + 0xcu);
    wr32(sp0 - 0x4cu, t12);
    wr32(sp0 - 0x50u, t12);
    t13 = rd32(self + 8u);
    wr32(sp0 - 0x54u, t13);
    g->eax = t13;
    g->edx = rd32(rd32(self + 8u));
    t14 = rd32(rd32(self + 8u));
    g->esp = sp0 - 0x34u;
    t15 = cow_thiscall(g, rd32(t14 + 0x50u), t12, 8, t13, t12, t12, t11, 0u, t10, 0u, self + 0x30u);
    t16 = g->edx;
    if ((int32_t)t15 < 0)
    {
        eax = t15;
        goto L_102e8b53;
    }
    edx = t16;
    loc_4 = rd32(sp0 - 4u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_8 = rd32(sp0 - 8u);
L_102e8a6e: ;
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    wr32(sp0 - 0x3cu, 0u);
    t17 = rd32(self + 0x30u);
    wr32(sp0 - 0x40u, t17);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x30u)) + 0x38u), sp0 - 0x28u, 3, t17, 0u, sp0 - 0x28u);
    t18 = g->edx;
    edx = t18;
    goto L_102e8a7b;
L_102e8ab4: ;
    wr32(sp0 - 0x38u, sp0 - 8u);
    wr32(sp0 - 0x3cu, 0u);
    if (rd32(self + 0x460u) != 1u)
    {
        t30 = rd32(self + 0x30u);
        wr32(sp0 - 0x40u, t30);
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x34u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0x30u)) + 0x3cu), rd32(rd32(self + 0x30u)), 3, t30, 0u, sp0 - 8u);
        t31 = g->edx;
        edx = t31;
        loc_8 = rd32(sp0 - 8u);
    }
    else
    {
        wr32(sp0 - 0x40u, arg1);
        t28 = rd32(self + 0x34u);
        wr32(sp0 - 0x44u, t28);
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x34u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0x34u)) + 0x3cu), rd32(rd32(self + 0x34u)), 4, t28, arg1, 0u, sp0 - 8u);
        t29 = g->edx;
        edx = t29;
        loc_8 = rd32(sp0 - 8u);
    }
    goto L_102e8ad9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8a03(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e8a03(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
