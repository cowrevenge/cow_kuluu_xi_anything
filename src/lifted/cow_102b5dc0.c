/* f_0x102b5dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102b5dc0(Guest* g)
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
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c20fcu), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = t4;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        g->eax = rd32(arg1);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41dcu), t9);
        t11 = g->ecx;
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b41dcu), t9);
        t14 = g->edx;
        t15 = rd32(arg1 + 0x44u);
        g->ecx = t15;
        g->edx = t14;
        g->esp = sp0 - 0x20u;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c20f0u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103c20f0u), t15);
        t20 = g->ecx;
        t21 = rd32(arg1 + 0x4cu);
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x2cu;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c20d8u), t21);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103c20d8u), t21);
        t25 = g->ecx;
        t26 = g->edx;
        t27 = rd32(arg1 + 0x48u);
        g->eax = t27;
        g->ecx = t25;
        g->edx = t26;
        g->esp = sp0 - 0x38u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bea60u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        g->ecx = t29;
        g->edx = t30;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bea60u), t27);
        t31 = g->ecx;
        t32 = g->edx;
        if (rd32(arg1 + 0x50u) == 0u)
        {
            ecx = t31;
            edx = t32;
            eax = 0u;
        }
        else
        {
            ecx = t31;
            edx = t32;
            eax = rd32(arg1 + 0x44u);
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bea20u), eax);
        t33 = g->ecx;
        t34 = g->edx;
        if (rd32(arg1 + 0x34u) == 0u)
        {
            eax = rd32(arg1 + 0x34u);
            ecx = t33;
            edx = t34;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t37 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
            t38 = g->ecx;
            t39 = g->edx;
            g->edx = t39;
            g->esp = sp0 - 0x10u;
            t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be9fcu), arg3 + 1u);
            t41 = g->edx;
            eax = t40;
            edx = t41;
            ebx = arg3;
        }
        else
        {
            eax = rd32(arg1 + 0x34u);
            ecx = t33;
            edx = t34;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t35 = cow_cdecl(g, COW_IMG(0x102a96e0u), 3, eax, arg2, arg3 + 1u);
            t36 = g->edx;
            eax = t35;
            edx = t36;
            ebx = arg3 + 1u;
        }
        if ((int32_t)arg2 >= 2)
        {
            g->eax = eax;
            g->ecx = ebx + 1u;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t42 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx + 1u, in_edi, in_esi);
            t43 = g->ecx;
            t44 = g->edx;
            g->ecx = t43;
            g->edx = t44;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be9ecu), ebx + 1u);
            t45 = g->ecx;
            t46 = g->edx;
            if ((int32_t)rd32(arg1 + 0x48u) <= 0)
            {
                eax = rd32(arg1 + 0x48u);
                edx = t46;
            }
            else
            {
                eax = rd32(arg1 + 0x48u);
                ecx = t45;
                edx = t46;
                ebx = ebx + 2u;
                edi = 0u;
L_102b5eb4: ;
                g->ecx = ecx;
                g->esp = sp0 - 8u;
                cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, in_edi, in_esi);
                t47 = g->ecx;
                t48 = rd32(edi * 4u + rd32(arg1 + 0x4cu));
                g->ecx = t47;
                g->edx = rd32(arg1 + 0x4cu);
                t49 = rd32(arg1 + 0x4cu);
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be9e4u), edi);
                t50 = g->ecx;
                t51 = g->edx;
                if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x48u))
                {
                    eax = rd32(arg1 + 0x48u);
                    ecx = t50;
                    edx = t51;
                    edi = edi + 1u;
                    goto L_102b5eb4;
                }
                eax = rd32(arg1 + 0x48u);
                edx = t51;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b5dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b5dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
