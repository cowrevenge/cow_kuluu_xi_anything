/* f_0x10290630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10290630(Guest* g)
{
    uint32_t eax;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 <= 0)
    {
        eax = arg2;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        if (rd32(arg1 + 0x18u) != 0u)
        {
            g->eax = arg2;
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baae0u), in_edi);
            t5 = g->ecx;
            t6 = g->edx;
            eax = t4;
            ecx = t5;
            edx = t6;
        }
        else
        {
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t1 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg2 * 0xcu, COW_IMG(0x103ba694u), 0x7d0u);
            t2 = g->ecx;
            t3 = g->edx;
            wr32(arg1 + 0x18u, t1);
            eax = t1;
            ecx = t2;
            edx = t3;
        }
    }
    if ((int32_t)arg3 > 0)
    {
        if (rd32(arg1 + 0x24u) != 0u)
        {
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baa98u), in_edi);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
        }
        else
        {
            g->ecx = arg3 * 0xcu;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t7 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg3 * 0xcu, COW_IMG(0x103ba694u), 0x7ddu);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(arg1 + 0x24u, t7);
            eax = t7;
            ecx = t8;
            edx = t9;
        }
        if (rd32(arg1 + 0x28u) != 0u)
        {
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baa50u), in_edi);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
        }
        else
        {
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t13 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg3, COW_IMG(0x103ba694u), 0x7e6u);
            t14 = g->ecx;
            t15 = g->edx;
            wr32(arg1 + 0x28u, t13);
            eax = t13;
            ecx = t14;
            edx = t15;
        }
    }
    if ((int32_t)arg4 > 0)
    {
        if (rd32(arg1 + 0x48u) != 0u)
        {
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baa10u), in_edi);
            t25 = g->ecx;
            t26 = g->edx;
            eax = t24;
            ecx = t25;
            edx = t26;
        }
        else
        {
            g->ecx = ecx;
            g->esp = sp0 - 0xcu;
            t19 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg4 * 0x2cu, COW_IMG(0x103ba694u), 0x7f3u);
            t20 = g->ecx;
            wr32(arg1 + 0x48u, t19);
            wr32(arg1 + 0x44u, arg4);
            if ((int32_t)arg4 <= 0)
            {
                eax = t19;
                ecx = t20;
                edx = 0u;
            }
            else
            {
                eax = t19;
                edx = 0u;
                edi = 0u;
L_10290712: ;
                t21 = edi + rd32(arg1 + 0x48u);
                g->ecx = t21;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x1028efd0u), 1, t21);
                t22 = g->ecx;
                t23 = g->edx;
                if ((int32_t)(t23 + 1u) < (int32_t)rd32(arg1 + 0x44u))
                {
                    eax = rd32(arg1 + 0x44u);
                    edx = t23 + 1u;
                    edi = edi + 0x2cu;
                    goto L_10290712;
                }
                eax = rd32(arg1 + 0x44u);
                ecx = t22;
                edx = t23 + 1u;
            }
        }
    }
    if ((int32_t)arg5 <= 0) goto L_102907dc;
    if (rd32(arg1 + 0x40u) != 0u) goto L_102907cf;
    g->esp = sp0 - 0xcu;
    t27 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg5 * 0x30u, COW_IMG(0x103ba694u), 0x805u);
    wr32(arg1 + 0x40u, t27);
    wr32(arg1 + 0x34u, arg5);
    if ((int32_t)arg5 <= 0) goto L_102907dc;
    eax = 0u;
    ecx = 0u;
L_10290781: ;
    wr32(eax + rd32(arg1 + 0x40u), 0u);
    wr32(eax + rd32(arg1 + 0x40u) + 4u, 0u);
    wr32(eax + rd32(arg1 + 0x40u) + 8u, 0u);
    wr32(eax + rd32(arg1 + 0x40u) + 0xcu, 0xffffffffu);
    wr32(eax + rd32(arg1 + 0x40u) + 0x10u, 0u);
    wr32(eax + rd32(arg1 + 0x40u) + 0x14u, 0u);
    wr8(eax + rd32(arg1 + 0x40u) + 0x24u, 0u);
    wr32(eax + rd32(arg1 + 0x40u) + 0x18u, 0x40000000u);
    wr32(eax + rd32(arg1 + 0x40u) + 0x28u, 0u);
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(arg1 + 0x34u))
    {
        eax = eax + 0x30u;
        ecx = ecx + 1u;
        goto L_10290781;
    }
    return;
L_102907cf: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba9c8u), in_edi);
L_102907dc: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10290630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10290630(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
