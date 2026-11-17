/* f_0x100ce480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_100ce480(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x20u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall(g, COW_IMG(0x1002c7c0u), rd32(self + 0x7e4u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
        loc_20 = 0u;
        goto L_100ce598;
    }
    edx = t2;
    esi = t1;
    loc_28 = in_ebx;
    loc_2c = in_ebp;
    loc_30 = in_esi;
    loc_34 = in_edi;
    loc_20 = 0u;
L_100ce4aa: ;
    t3 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x24u, t3);
    if (rd32(esi + 0x1cu) == 0u) goto L_100ce58d;
    eax = t3;
    loc_24 = t3;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t4 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce58d;
    }
    if (rd32(sp0 - 0x24u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
        eax = rd32(eax);
    }
    edi = rd32(eax + 0x14u);
    loc_24 = rd32(sp0 - 0x24u);
L_100ce4db: ;
    if (edi == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(edi);
    }
    wr32(sp0 - 0x38u, arg4);
    wr32(sp0 - 0x3cu, arg3);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, eax);
    g->edx = arg3;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg2, arg3, arg4);
    t6 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        edx = t6;
        goto L_100ce555;
    }
    eax = rd32(sp0 - 8u);
L_100ce502: ;
    if (rd32(sp0 - 0x20u) != arg5) goto L_100ce53e;
    if (arg2 != 7u) goto L_100ce64e;
    if (rd32(eax + 0x20u) != rd32(self + 0x7c4u)) goto L_100ce52b;
    edx = rd32(eax + 0x20u);
    if ((uint8_t)arg6 != 1u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce542;
    }
L_100ce52b: ;
    t33 = rd32(eax + 0x14u);
    t34 = rd32(sp0 - 0x2cu);
    t35 = rd32(sp0 - 0x30u);
    t36 = rd32(sp0 - 0x34u);
    wr32(arg1, t33);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t35;
    g->edi = t36;
    g->ebp = t34;
    return arg1;
L_100ce53e: ;
    t7 = rd32(sp0 - 0x20u) + 1u;
    wr32(sp0 - 0x20u, t7);
    edx = arg5;
    loc_20 = t7;
L_100ce542: ;
    wr32(sp0 - 0x38u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t8 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce502;
    }
    edx = t8;
L_100ce555: ;
    g->eax = rd32(sp0 - 0x24u);
    g->edx = edx;
    t9 = rd32(sp0 - 0x24u);
    g->esp = sp0 - 0x34u;
    t10 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(t9), 0);
    t11 = g->edx;
    if (t10 == 0u)
    {
        edx = t11;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce58d;
    }
    eax = t10;
    edx = t11;
    if (rd32(sp0 - 0x24u) == 0u)
    {
        ecx = 0u;
    }
    else
    {
        ecx = rd32(sp0 - 0x24u);
        ecx = rd32(ecx);
    }
    if (eax == ecx)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce58d;
    }
    t12 = rd32(eax + 0x14u);
    wr32(sp0 - 0x24u, t12);
    t13 = rd32(COW_IMG(0x1047d130u)) - 1u;
    wr32(COW_IMG(0x1047d130u), t13);
    loc_24 = t12;
    goto L_100ce4db;
L_100ce58d: ;
    if (rd32(esi + 8u) != 0u)
    {
        esi = rd32(esi + 8u);
        goto L_100ce4aa;
    }
L_100ce598: ;
    if (arg3 != 0x74696e69u)
    {
        edi = arg3;
    }
    else
    {
        wr32(sp0 - 0x38u, sp0 + 8u);
        g->eax = rd32(self);
        t14 = rd32(self);
        g->esp = sp0 - 0x34u;
        t15 = cow_thiscall(g, rd32(t14 + 0x1dcu), self, 1, sp0 + 8u);
        if (rd32(t15) == 0u)
        {
            edi = arg3;
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_20 = rd32(sp0 - 0x20u);
        }
        else
        {
            eax = rd32(t15);
            if (rd32(eax) == 0u)
            {
                edi = arg3;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
                edi = 0x30696e69u;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_20 = rd32(sp0 - 0x20u);
            }
        }
    }
    wr32(sp0 - 0x38u, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->edx = rd32(self);
    t16 = rd32(self);
    g->esp = sp0 - 0x34u;
    t17 = cow_thiscall(g, rd32(t16 + 0x400u), self, 1, sp0 + 8u);
    t18 = g->edx;
    wr32(sp0 - 0x24u, rd32(t17));
    if (rd32(t17) == 0u) goto L_100ce69a;
    eax = rd32(t17);
    edx = t18;
    loc_24 = rd32(t17);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t19 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u) goto L_100ce69a;
    edx = t20;
    if (rd32(sp0 - 0x24u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
        eax = rd32(eax);
    }
    esi = rd32(eax + 0x14u);
L_100ce602: ;
    if (esi == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(esi);
    }
    wr32(sp0 - 0x38u, arg4);
    wr32(sp0 - 0x3cu, edi);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg2, edi, arg4);
    t21 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t21;
        goto L_100ce678;
    }
    eax = rd32(sp0 - 8u);
L_100ce625: ;
    if (rd32(sp0 - 0x20u) != arg5)
    {
        edx = rd32(sp0 - 0x20u);
        goto L_100ce661;
    }
    if (arg2 != 7u) goto L_100ce52b;
    if (rd32(eax + 0x20u) != rd32(self + 0x7c4u)) goto L_100ce64e;
    edx = rd32(self + 0x7c4u);
    if ((uint8_t)arg6 != 1u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce665;
    }
L_100ce64e: ;
    t37 = rd32(eax + 0x14u);
    t38 = rd32(sp0 - 0x2cu);
    t39 = rd32(sp0 - 0x30u);
    t40 = rd32(sp0 - 0x34u);
    wr32(arg1, t37);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t39;
    g->edi = t40;
    g->ebp = t38;
    return arg1;
L_100ce661: ;
    t22 = rd32(sp0 - 0x20u) + 1u;
    wr32(sp0 - 0x20u, t22);
    loc_20 = t22;
L_100ce665: ;
    wr32(sp0 - 0x38u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t23 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce625;
    }
    eax = rd32(sp0 - 8u);
    edx = t23;
L_100ce678: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t24 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t25 = g->edx;
    if (t24 == 0u) goto L_100ce69a;
    eax = t24;
    edx = t25;
    if (eax == rd32(esi)) goto L_100ce69a;
    t26 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t27 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t26);
    esi = t27;
    goto L_100ce602;
L_100ce69a: ;
    wr32(sp0 - 0x38u, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->edx = rd32(self);
    t28 = rd32(self);
    g->esp = sp0 - 0x34u;
    t29 = cow_thiscall(g, rd32(t28 + 0x1dcu), self, 1, sp0 + 8u);
    t30 = g->edx;
    wr32(sp0 - 0x24u, rd32(t29));
    if (rd32(t29) == 0u) goto L_100ce76c;
    eax = rd32(t29);
    edx = t30;
    loc_24 = rd32(t29);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t31 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    if ((uint8_t)t31 == 0u) goto L_100ce76c;
    if (rd32(sp0 - 0x24u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
        eax = rd32(eax);
    }
    esi = rd32(eax + 0x14u);
L_100ce6d9: ;
    if (esi == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(esi);
    }
    wr32(sp0 - 0x38u, arg4);
    wr32(sp0 - 0x3cu, arg3);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, eax);
    g->edx = arg3;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg2, arg3, arg4);
    t32 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t32;
        goto L_100ce74a;
    }
    eax = rd32(sp0 - 8u);
L_100ce700: ;
    if (rd32(sp0 - 0x20u) != arg5) goto L_100ce733;
    if (arg2 != 7u) goto L_100ce64e;
    if (rd32(eax + 0x20u) != rd32(self + 0x7c4u)) goto L_100ce52b;
    edx = rd32(eax + 0x20u);
    if ((uint8_t)arg6 == 1u) goto L_100ce52b;
    loc_20 = rd32(sp0 - 0x20u);
L_100ce737: ;
    wr32(sp0 - 0x38u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t42 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce700;
    }
    eax = rd32(sp0 - 8u);
    edx = t42;
L_100ce74a: ;
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t43 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    if (t43 == 0u) goto L_100ce76c;
    eax = t43;
    if (eax == rd32(esi)) goto L_100ce76c;
    t44 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t45 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t44);
    esi = t45;
    goto L_100ce6d9;
L_100ce733: ;
    t41 = rd32(sp0 - 0x20u) + 1u;
    wr32(sp0 - 0x20u, t41);
    edx = arg5;
    loc_20 = t41;
    goto L_100ce737;
L_100ce76c: ;
    t46 = rd32(sp0 - 0x2cu);
    t47 = rd32(sp0 - 0x30u);
    t48 = rd32(sp0 - 0x34u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t47;
    g->edi = t48;
    g->ebp = t46;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ce480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ce480(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
