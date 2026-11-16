/* f_0x102266e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102266e0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
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
                ebx = arg5 * 8u + rd32(arg1 + 0x20u);
                g->edx = in_edx;
                g->esp = sp0 - 0x10u;
                t1 = cow_thiscall(g, COW_IMG(0x10226620u), arg1, 1, arg5);
                t2 = g->ecx;
                t3 = g->edx;
                if ((int32_t)t1 < 0)
                {
                    eax = t1;
                    edx = t3;
                }
                else
                {
                    ecx = t2;
                    edx = t3;
                    ebp = t1;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t4 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 2u);
                    t5 = g->edx;
                    if (rd32(sp0 + 0x18u) == t4)
                    {
                        ecx = rd32(sp0 + 0x18u);
                        edx = t5;
                    }
                    else
                    {
                        ecx = rd32(sp0 + 0x18u);
                        edx = t5;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t6 = cow_cdecl(g, COW_IMG(0x10226d80u), 1, ebp);
                        t7 = g->ecx;
                        t8 = g->edx;
                        if (t6 == 0u)
                        {
                            ecx = t7;
                            edx = t8;
                        }
                        else
                        {
                            ecx = t7;
                            edx = t8;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t9 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 1u);
                            t10 = g->ecx;
                            t11 = g->edx;
                            wr32(sp0 + 0x18u, t9);
                            ecx = t10;
                            edx = t11;
                        }
                    }
                    if (rd32(arg1 + 0x30u) != arg5)
                    {
                        if (rd32(arg1 + 0x64u) == 2u)
                        {
                            if (rd32(arg1 + 0x68u) == arg5)
                            {
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t12 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 3u);
                                t13 = g->edx;
                                wr32(sp0 + 0x18u, t12);
                                edx = t13;
                            }
                        }
                    }
                    g->ebx = ebx;
                    g->eax = rd32(ebx);
                    t14 = rd32(ebx);
                    g->esp = sp0 - 0x10u;
                    t15 = cow_fastcall(g, COW_IMG(0x102265a0u), arg1, edx, 1, t14);
                    t16 = g->edx;
                    if (t15 == 0u)
                    {
                        edx = t16;
                    }
                    else
                    {
                        eax = t15;
                        t17 = rd32(sp0 + 0x18u);
                        g->ebx = ebx;
                        g->edx = arg3 + 0x12u;
                        g->esp = sp0 - 0x10u;
                        cow_cdecl(g, COW_IMG(0x10129f00u), 5, arg3 + 0x12u, arg4, eax, 0u, t17);
                        t18 = g->edx;
                        edx = t18;
                    }
                    g->ebx = ebx;
                    g->eax = rd32(ebx);
                    t19 = rd32(ebx);
                    g->esp = sp0 - 0x10u;
                    t20 = cow_fastcall(g, COW_IMG(0x102265c0u), arg1, edx, 1, t19);
                    t21 = g->ecx;
                    t22 = g->edx;
                    if (t20 == 0u)
                    {
                        eax = t20;
                        edx = t22;
                    }
                    else
                    {
                        eax = t20;
                        ecx = t21;
                        edx = t22;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t23 = cow_cdecl(g, COW_IMG(0x10220fc0u), 1, eax);
                        t24 = g->edx;
                        if (t23 == 0u)
                        {
                            eax = t23;
                            edx = t24;
                        }
                        else
                        {
                            eax = t23;
                            edx = t24;
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t25 = cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, arg3, arg4, 0x80808080u, 0u, 0u);
                            t26 = g->edx;
                            eax = t25;
                            edx = t26;
                        }
                    }
                }
            }
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102266e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102266e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
