/* f_0x102257d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102257d0(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg5 < 0)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if ((int32_t)arg5 >= (int32_t)rd32(arg1 + 0x44u))
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
            if (arg5 * 8u + rd32(arg1 + 0x20u) == 0u)
            {
                eax = rd32(arg1 + 0x20u);
                edx = in_edx;
            }
            else
            {
                edi = arg5 * 8u + rd32(arg1 + 0x20u);
                g->edx = in_edx;
                g->esp = sp0 - 0x10u;
                t1 = cow_thiscall(g, COW_IMG(0x10225680u), arg1, 1, rd32(edi));
                t2 = g->ecx;
                t3 = g->edx;
                g->ecx = t2;
                g->edx = t3;
                t4 = cow_cdecl(g, COW_IMG(0x102253e0u), 1, t1);
                t5 = g->ecx;
                t6 = g->edx;
                if ((uint8_t)t4 == 0u)
                {
                    ebp = arg6;
                }
                else
                {
                    ecx = t5;
                    edx = t6;
                    g->esp = sp0 - 0x10u;
                    t7 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 1u);
                    ebp = t7;
                }
                g->edx = rd32(edi);
                t8 = rd32(edi);
                g->esp = sp0 - 0x10u;
                t9 = cow_thiscall(g, COW_IMG(0x10225680u), arg1, 1, t8);
                t10 = g->ecx;
                t11 = g->edx;
                g->ecx = t10;
                g->edx = t11;
                t12 = cow_cdecl(g, COW_IMG(0x10225430u), 1, t9);
                t13 = g->ecx;
                t14 = g->edx;
                if ((uint8_t)t12 == 0u)
                {
                    ecx = t13;
                    edx = t14;
                }
                else
                {
                    ecx = t13;
                    edx = t14;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t15 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 1u);
                    t16 = g->ecx;
                    t17 = g->edx;
                    ecx = t16;
                    edx = t17;
                    ebp = t15;
                }
                if (rd32(arg1 + 0x30u) != arg5)
                {
                    if (rd32(arg1 + 0x6cu) == 2u)
                    {
                        if (rd32(arg1 + 0x70u) == arg5)
                        {
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t18 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 3u);
                            t19 = g->edx;
                            edx = t19;
                            ebp = t18;
                        }
                    }
                }
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t20 = cow_thiscall(g, COW_IMG(0x10225560u), arg1, 1, rd32(edi));
                t21 = g->ecx;
                t22 = g->edx;
                if (t20 == 0u)
                {
                    eax = t20;
                    ecx = t21;
                    edx = t22;
                }
                else
                {
                    eax = t20;
                    ecx = t21;
                    edx = t22;
                    g->eax = arg3 + 0x12u;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t23 = cow_cdecl(g, COW_IMG(0x10129f00u), 5, arg3 + 0x12u, arg4, eax, 0u, ebp);
                    t24 = g->ecx;
                    t25 = g->edx;
                    eax = t23;
                    ecx = t24;
                    edx = t25;
                }
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t26 = cow_stdcall(g, COW_IMG(0x10220fb0u), 0);
                t27 = g->edx;
                if (t26 == 0u)
                {
                    eax = t26;
                    edx = t27;
                }
                else
                {
                    eax = t26;
                    edx = t27;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t28 = cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, arg3, arg4, 0x80808080u, 0u, 0u);
                    t29 = g->edx;
                    eax = t28;
                    edx = t29;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102257d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102257d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
