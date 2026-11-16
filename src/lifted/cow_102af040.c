/* f_0x102af040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102af040(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg3;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf418u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 >= 1)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        t9 = rd32(arg1 + 0x18u);
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf404u), t9);
        t10 = g->ecx;
        t11 = g->edx;
        if (rd32(arg1 + 0x18u) == 0u)
        {
            eax = rd32(arg1 + 0x18u);
            ecx = t10;
            edx = t11;
        }
        else
        {
            eax = rd32(arg1 + 0x18u);
            ecx = t10;
            edx = t11;
            if ((int32_t)arg2 >= 2)
            {
                if ((int32_t)rd32(arg1 + 0x28u) <= 0)
                {
                    eax = rd32(arg1 + 0x28u);
                }
                else
                {
                    eax = rd32(arg1 + 0x28u);
                    ebp = 0u;
                    edi = 0u;
L_102af09f: ;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t12 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, in_ebp, in_edi);
                    t13 = g->ecx;
                    t14 = g->edx;
                    g->esp = sp0 - 0x14u;
                    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf3f4u), edi);
                    t16 = ebp + rd32(arg1 + 0x18u);
                    g->ecx = arg2;
                    g->edx = t16;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x10274ad0u), 3, t16, arg2, 0u);
                    t17 = g->ecx;
                    t18 = g->edx;
                    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x28u))
                    {
                        eax = rd32(arg1 + 0x28u);
                        ecx = t17;
                        edx = t18;
                        ebp = ebp + 0xcu;
                        edi = edi + 1u;
                        goto L_102af09f;
                    }
                    eax = rd32(arg1 + 0x28u);
                    ecx = t17;
                    edx = t18;
                }
            }
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t19 = g->ecx;
        t20 = g->edx;
        t21 = rd32(arg1 + 0x1cu);
        g->eax = t21;
        g->ecx = t19;
        g->edx = t20;
        g->esp = sp0 - 0x10u;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf3e0u), t21);
        t23 = g->ecx;
        t24 = g->edx;
        g->edx = t24;
        t25 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bf3e0u), t21);
        t26 = g->edx;
        t27 = rd32(arg1 + 0x24u);
        g->ecx = t27;
        g->edx = t26;
        g->esp = sp0 - 0x1cu;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf3ccu), t27);
        t29 = g->ecx;
        t30 = g->edx;
        g->ecx = t29;
        t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bf3ccu), t27);
        t32 = g->ecx;
        t33 = rd32(arg1 + 0x20u);
        g->ecx = t32;
        g->edx = t33;
        g->esp = sp0 - 0x28u;
        t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf3b8u), t33);
        t35 = g->ecx;
        t36 = g->edx;
        g->ecx = t35;
        g->edx = t36;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bf3b8u), t33);
        t37 = g->ecx;
        t38 = g->edx;
        t39 = rd32(arg1 + 0x28u);
        g->eax = t39;
        g->ecx = t37;
        g->edx = t38;
        g->esp = sp0 - 0x34u;
        t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf3a4u), t39);
        t41 = g->ecx;
        t42 = g->edx;
        g->edx = t42;
        t43 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bf3a4u), t39);
        t44 = g->edx;
        t45 = rd32(arg1 + 0x2cu);
        g->ecx = t45;
        g->edx = t44;
        g->esp = sp0 - 0x40u;
        t46 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf390u), t45);
        t47 = g->ecx;
        t48 = g->edx;
        g->ecx = t47;
        t49 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bf390u), t45);
        t50 = g->ecx;
        t51 = rd32(arg1 + 0x34u);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf384u), t51);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102af040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102af040(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
