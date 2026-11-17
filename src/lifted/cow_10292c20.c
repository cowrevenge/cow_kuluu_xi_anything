/* f_0x10292c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10292c20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 0x38u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x38u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x2aeu);
        t1 = g->ecx;
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    if (rd32(arg1 + 0x3cu) != 0u)
    {
        eax = rd32(arg1 + 0x3cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x2b1u);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    if (rd32(arg1 + 0x40u) != 0u)
    {
        eax = rd32(arg1 + 0x40u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x2b4u);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    if (rd32(arg1 + 0x4cu) != 0u)
    {
        eax = rd32(arg1 + 0x4cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x2b7u);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    if (rd32(arg1 + 0x50u) != 0u)
    {
        eax = rd32(arg1 + 0x50u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x2bau);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
    if (rd32(arg1 + 0x2cu) == 0u)
    {
        eax = rd32(arg1 + 0x2cu);
    }
    else
    {
        eax = rd32(arg1 + 0x2cu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t11 = cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x2bdu);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    if (rd32(arg1 + 0x34u) != 0u)
    {
        if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
        {
            eax = rd32(arg1 + 0x1cu);
            goto L_10292cea;
        }
        edi = 0u;
L_10292cd3: ;
        t14 = edi * 4u + rd32(arg1 + 0x34u);
        g->ecx = t14;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10292720u), 3, t14, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
        {
            edx = t16;
            edi = edi + 1u;
            goto L_10292cd3;
        }
        eax = rd32(arg1 + 0x1cu);
        ecx = t15;
L_10292cea: ;
        t17 = rd32(arg1 + 0x34u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t17;
        g->esp = sp0 - 0xcu;
        t18 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t17, COW_IMG(0x103bb254u), 0x2c2u);
        t19 = g->ecx;
        t20 = g->edx;
        eax = t18;
        ecx = t19;
        edx = t20;
    }
    wr32(arg1 + 0x1cu, arg2);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg2, 4u, COW_IMG(0x103bb254u), 0x2c9u, in_edi);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(arg1 + 0x38u, t21);
    g->ecx = t22;
    g->edx = t23;
    g->esp = sp0 - 0x18u;
    t24 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg2, 4u, COW_IMG(0x103bb254u), 0x2cau, arg2);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(arg1 + 0x3cu, t24);
    g->ecx = t25;
    g->edx = t26;
    g->esp = sp0 - 0x28u;
    t27 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg2, 4u, COW_IMG(0x103bb254u), 0x2cbu, arg2);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(arg1 + 0x40u, t27);
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0x38u;
    t30 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg2, 4u, COW_IMG(0x103bb254u), 0x2ccu, arg2);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(arg1 + 0x4cu, t30);
    t33 = rd32(arg1 + 0x24u) * arg2;
    g->eax = t33;
    g->ecx = t31;
    g->edx = t32;
    g->esp = sp0 - 8u;
    t34 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t33, 4u, COW_IMG(0x103bb254u), 0x2cdu, in_edi);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(arg1 + 0x2cu, t34);
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 0x14u;
    t37 = cow_cdecl(g, COW_IMG(0x10284fc0u), 3, arg1, t33, 4u);
    t38 = g->ecx;
    t39 = g->edx;
    wr8(arg1 + 0x54u, 0u);
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0x1cu;
    t40 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg2, 1u, COW_IMG(0x103bb254u), 0x2d2u, arg1);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(arg1 + 0x50u, t40);
    if ((int32_t)arg2 <= 0) goto L_10292dbb;
    eax = t40;
    ecx = t41;
    edx = t42;
    ebx = 0u;
L_10292d9e: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t43 = cow_cdecl(g, COW_IMG(0x10293020u), 2, arg1, ebx);
    t44 = g->ecx;
    t45 = g->edx;
    if ((int32_t)(ebx + 1u) < (int32_t)arg2)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        ebx = ebx + 1u;
        goto L_10292d9e;
    }
    wr32(arg1 + 0x44u, arg2 * 4u);
    return;
L_10292dbb: ;
    wr32(arg1 + 0x44u, arg2 * 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10292c20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
