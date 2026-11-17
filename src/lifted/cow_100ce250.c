/* f_0x100ce250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ce250(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    if (arg2 != 0x74696e69u)
    {
        edi = arg2;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
    }
    else
    {
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        g->eax = rd32(self);
        t1 = rd32(self);
        g->esp = sp0 - 0x34u;
        t2 = cow_thiscall(g, rd32(t1 + 0x1dcu), self, 1, sp0 - 0x20u);
        if (rd32(t2) == 0u)
        {
            edi = arg2;
            loc_28 = in_ebx;
            loc_2c = in_ebp;
            loc_30 = in_esi;
            loc_34 = in_edi;
        }
        else
        {
            eax = rd32(t2);
            if (rd32(eax) == 0u)
            {
                edi = arg2;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
            }
            else
            {
                edi = 0x30696e69u;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
            }
        }
    }
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 0x34u;
    t4 = cow_thiscall(g, rd32(t3 + 0x400u), self, 1, sp0 - 0x20u);
    t5 = g->edx;
    wr32(sp0 - 0x24u, rd32(t4));
    if (rd32(t4) == 0u) goto L_100ce317;
    eax = rd32(t4);
    edx = t5;
    loc_24 = rd32(t4);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t6 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t7 = g->edx;
    if ((uint8_t)t6 != 1u) goto L_100ce317;
    edx = t7;
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
L_100ce2bf: ;
    if (esi == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(esi);
    }
    wr32(sp0 - 0x38u, arg3);
    wr32(sp0 - 0x3cu, edi);
    wr32(sp0 - 0x40u, 0x2bu);
    wr32(sp0 - 0x44u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100ce470u), sp0 - 0x1cu, 4, eax, 0x2bu, edi, arg3);
    t8 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce2fe;
    }
    eax = rd32(sp0 - 8u);
    edx = t8;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t9 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t10 = g->edx;
    if (t9 == 0u) goto L_100ce317;
    eax = t9;
    edx = t10;
    if (eax == rd32(esi)) goto L_100ce317;
    t11 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t12 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t11);
    esi = t12;
    goto L_100ce2bf;
L_100ce2fe: ;
    if (rd32(eax + 0x14u) == 0u) goto L_100ce317;
    eax = rd32(eax + 0x14u);
    t13 = rd32(sp0 - 0x2cu);
    t14 = rd32(sp0 - 0x30u);
    t15 = rd32(sp0 - 0x34u);
    wr32(arg1, eax);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t14;
    g->edi = t15;
    g->ebp = t13;
    return arg1;
L_100ce317: ;
    wr32(sp0 - 0x38u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = rd32(self);
    t16 = rd32(self);
    g->esp = sp0 - 0x34u;
    t17 = cow_thiscall(g, rd32(t16 + 0x1dcu), self, 1, sp0 + 0xcu);
    t18 = g->edx;
    wr32(sp0 - 0x24u, rd32(t17));
    if (rd32(t17) == 0u)
    {
        edx = t18;
        goto L_100ce3aa;
    }
    eax = rd32(t17);
    edx = t18;
    loc_24 = rd32(t17);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t19 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t20 = g->edx;
    if ((uint8_t)t19 != 1u)
    {
        edx = t20;
        goto L_100ce3aa;
    }
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
L_100ce34e: ;
    if (esi == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(esi);
    }
    wr32(sp0 - 0x38u, arg3);
    wr32(sp0 - 0x3cu, arg2);
    wr32(sp0 - 0x40u, 0x2bu);
    wr32(sp0 - 0x44u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, 0x2bu, arg2, arg3);
    t21 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t21;
        goto L_100ce391;
    }
    eax = rd32(sp0 - 8u);
    edx = t21;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t22 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t23 = g->edx;
    if (t22 == 0u)
    {
        edx = t23;
        goto L_100ce3aa;
    }
    eax = t22;
    edx = t23;
    if (eax == rd32(esi)) goto L_100ce3aa;
    t24 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t25 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t24);
    esi = t25;
    goto L_100ce34e;
L_100ce391: ;
    if (rd32(eax + 0x14u) == 0u) goto L_100ce3aa;
    eax = rd32(eax + 0x14u);
    t26 = rd32(sp0 - 0x2cu);
    t27 = rd32(sp0 - 0x30u);
    t28 = rd32(sp0 - 0x34u);
    wr32(arg1, eax);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t27;
    g->edi = t28;
    g->ebp = t26;
    return arg1;
L_100ce3aa: ;
    if (rd32(self + 0x7e4u) == 0u) goto L_100ce446;
    ebx = rd32(self + 0x7e4u);
L_100ce3b8: ;
    if (rd32(ebx + 0x1cu) == 0u) goto L_100ce43b;
    eax = rd32(ebx + 0x1cu);
    if (rd32(eax) == 0u) goto L_100ce43b;
    ecx = rd32(eax);
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = ecx;
    }
    t29 = rd32(eax + 0x14u);
    wr32(sp0 - 0x24u, t29);
    if (rd32(eax + 0x14u) == 0u) goto L_100ce43b;
    eax = t29;
    loc_24 = t29;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t30 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t31 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        edx = t31;
        goto L_100ce43b;
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
    esi = rd32(eax + 0x14u);
L_100ce3f8: ;
    if (esi == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(esi);
    }
    wr32(sp0 - 0x38u, arg3);
    wr32(sp0 - 0x3cu, arg2);
    wr32(sp0 - 0x40u, 0x2bu);
    wr32(sp0 - 0x44u, eax);
    g->edx = arg2;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, 0x2bu, arg2, arg3);
    t32 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce45a;
    }
    eax = rd32(sp0 - 8u);
    edx = t32;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t33 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t34 = g->edx;
    if (t33 == 0u)
    {
        edx = t34;
        goto L_100ce43b;
    }
    eax = t33;
    edx = t34;
    if (eax == rd32(esi)) goto L_100ce43b;
    t35 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t36 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t35);
    esi = t36;
    goto L_100ce3f8;
L_100ce43b: ;
    if (rd32(ebx + 4u) != 0u)
    {
        ebx = rd32(ebx + 4u);
        goto L_100ce3b8;
    }
L_100ce446: ;
    t41 = rd32(sp0 - 0x2cu);
    t42 = rd32(sp0 - 0x30u);
    t43 = rd32(sp0 - 0x34u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t42;
    g->edi = t43;
    g->ebp = t41;
    return arg1;
L_100ce45a: ;
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
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ce250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ce250(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
