/* f_0x102aed60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102aed60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
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
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf314u), arg1);
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
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf304u), rd32(arg1));
        t9 = g->ecx;
        t10 = g->edx;
        if (rd32(arg1) == 0u)
        {
            eax = rd32(arg1);
            ecx = t9;
            edx = t10;
        }
        else
        {
            eax = rd32(arg1);
            ecx = t9;
            edx = t10;
            if ((int32_t)arg2 >= 2)
            {
                g->eax = eax;
                g->ecx = arg3 + 2u;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t11 = cow_cdecl(g, COW_IMG(0x102af040u), 5, eax, arg2, arg3 + 2u, in_edi, in_esi);
                t12 = g->ecx;
                t13 = g->edx;
                eax = t11;
                ecx = t12;
                edx = t13;
            }
        }
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t14 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebx, in_edi);
        t15 = g->ecx;
        t16 = rd32(arg1 + 4u);
        g->ecx = t15;
        g->edx = t16;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf2ecu), t16);
        t17 = g->ecx;
        t18 = g->edx;
        if (rd32(arg1 + 4u) == 0u)
        {
            eax = rd32(arg1 + 4u);
            ecx = t17;
            edx = t18;
        }
        else
        {
            ecx = t17;
            edx = t18;
            if (rd32(arg1) == 0u)
            {
                eax = rd32(arg1);
            }
            else
            {
                eax = rd32(arg1);
                if ((int32_t)arg2 >= 2)
                {
                    if ((int32_t)rd32(eax + 0x28u) <= 0)
                    {
                        ecx = rd32(eax + 0x28u);
                    }
                    else
                    {
                        ecx = rd32(eax + 0x28u);
                        ebx = 0u;
                        ebp = 0u;
L_102aedf4: ;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 8u;
                        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, in_ebx, in_edi);
                        t20 = g->ecx;
                        t21 = g->edx;
                        g->edx = t21;
                        g->esp = sp0 - 0x14u;
                        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf2d0u), ebx);
                        t22 = g->edx;
                        t23 = ebp + rd32(arg1 + 4u);
                        g->eax = arg2;
                        g->ecx = t23;
                        g->esp = sp0 - 0x1cu;
                        t24 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, t23, arg2, 0u);
                        t25 = g->ecx;
                        if ((int32_t)(ebx + 1u) < (int32_t)rd32(rd32(arg1) + 0x28u))
                        {
                            eax = t24;
                            ecx = t25;
                            edx = rd32(arg1);
                            ebx = ebx + 1u;
                            ebp = ebp + 0xcu;
                            goto L_102aedf4;
                        }
                        eax = t24;
                        ecx = t25;
                        edx = rd32(arg1);
                    }
                }
            }
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebx, in_edi);
        t26 = g->ecx;
        t27 = g->edx;
        t28 = rd32(arg1 + 8u);
        g->ecx = t26;
        g->edx = t27;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf2b8u), t28);
        t29 = g->ecx;
        t30 = g->edx;
        if (rd32(arg1 + 8u) == 0u)
        {
            eax = rd32(arg1 + 8u);
            ecx = t29;
            edx = t30;
        }
        else
        {
            ecx = t29;
            edx = t30;
            if (rd32(arg1) == 0u)
            {
                eax = rd32(arg1);
            }
            else
            {
                eax = rd32(arg1);
                if ((int32_t)arg2 >= 2)
                {
                    if ((int32_t)rd32(eax + 0x28u) <= 0)
                    {
                        ecx = rd32(eax + 0x28u);
                    }
                    else
                    {
                        ecx = rd32(eax + 0x28u);
                        ebx = 0u;
                        ebp = 0u;
L_102aee5f: ;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 8u;
                        t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, in_ebx, in_edi);
                        t32 = g->ecx;
                        t33 = g->edx;
                        g->esp = sp0 - 0x14u;
                        t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf2a0u), ebx);
                        t35 = ebp + rd32(arg1 + 8u);
                        g->ecx = arg2;
                        g->edx = t35;
                        g->esp = sp0 - 0x1cu;
                        cow_cdecl(g, COW_IMG(0x10274ad0u), 3, t35, arg2, 0u);
                        t36 = g->ecx;
                        t37 = g->edx;
                        if ((int32_t)(ebx + 1u) < (int32_t)rd32(rd32(arg1) + 0x28u))
                        {
                            eax = rd32(arg1);
                            ecx = t36;
                            edx = t37;
                            ebx = ebx + 1u;
                            ebp = ebp + 0xcu;
                            goto L_102aee5f;
                        }
                        eax = rd32(arg1);
                        ecx = t36;
                        edx = t37;
                    }
                }
            }
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t38 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebx, in_edi);
        t39 = g->edx;
        t40 = rd32(arg1 + 0xcu);
        g->edx = t39;
        g->esp = sp0 - 0x14u;
        t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf294u), t40);
        t42 = g->edx;
        eax = t41;
        edx = t42;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aed60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102aed60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
