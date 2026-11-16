/* f_0x100f2020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100f2020(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0u) goto L_100f20d3;
    if (arg1 == 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_100f2159;
    }
    if (arg5 == 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_100f2159;
    }
    if (rd8(arg1 + 6u) == 0u)
    {
        ecx = (arg5 & 0xffffff00u) | rd8(arg1 + 6u);
        goto L_100f2056;
    }
    return arg1 & 0xffffff00u;
L_100f2056: ;
    wr16(arg1 + 0xau, (uint16_t)(rd16(arg1 + 0xau) + 1u));
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int16_t)t1 <= 0)
    {
        eax = t1;
        edx = t3;
        goto L_100f2159;
    }
    ecx = t2;
    edx = t3;
    ebx = t1;
    ebp = 0u;
L_100f206c: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100e6c40u), ecx, 1, ebp);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    else
    {
        edx = t6;
        esi = t4;
        if (rd32(esi) != rd32(rd32(arg5 + 0x18u)))
        {
            eax = arg5;
            ecx = rd32(esi);
        }
        else
        {
            ecx = rd32(esi);
            edi = rd32(arg5 + 0x18u);
            if (rd32(esi + 4u) != rd32(edi + 4u))
            {
                eax = rd32(edi + 4u);
                edx = rd32(esi + 4u);
            }
            else
            {
                if (!(rd32(esi + 0x98u) & 1u))
                {
                    eax = rd32(esi + 0x98u) & 1u;
                    ecx = rd32(esi + 0x9cu);
                    edx = 0u;
                }
                else
                {
                    ecx = rd32(esi + 0x9cu);
                    if ((ecx >> 0xdu & 0x3fu) != rd8(edi + 0x3cu))
                    {
                        eax = rd8(edi + 0x3cu);
                        ecx = ecx >> 0xdu & 0x3fu;
                        edx = (uint32_t)((int32_t)rd8(edi + 0x3cu) >> 0x1fu);
                    }
                    else
                    {
                        eax = rd8(edi + 0x3cu);
                        ecx = ecx >> 0xdu & 0x3fu;
                        edx = (uint32_t)((int32_t)rd8(edi + 0x3cu) >> 0x1fu);
                        if (0u == edx)
                        {
                            g->eax = eax;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t7 = cow_cdecl(g, COW_IMG(0x100e63b0u), 1, esi);
                            t8 = g->ecx;
                            t9 = g->edx;
                            eax = t7;
                            ecx = t8;
                            edx = t9;
                        }
                    }
                }
            }
        }
    }
    if ((int16_t)(ebp + 1u) < (int16_t)ebx)
    {
        ebp = ebp + 1u;
        goto L_100f206c;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100f20d3: ;
    if (arg3 != 1u)
    {
        eax = arg3;
        edx = in_edx;
        goto L_100f2159;
    }
    if (arg1 == 0u)
    {
        eax = arg3;
        edx = in_edx;
        goto L_100f2159;
    }
    if (rd32(arg1 + 0x20u) == 0u)
    {
        eax = rd32(arg1 + 0x20u);
        edx = in_edx;
        goto L_100f2159;
    }
    eax = rd32(arg1 + 0x20u);
    wr8(arg1 + 6u, (uint8_t)(rd8(arg1 + 6u) + 1u));
    if (rd32(arg1 + 0x1cu) == 0u)
    {
        ecx = rd32(arg1 + 0x1cu);
        goto L_100f210b;
    }
    ecx = rd32(arg1 + 0x1cu);
L_100f20fa: ;
    if (rd16(ecx + 0x1058u) == 0u) goto L_100f2160;
    if (rd32(ecx + 4u) != 0u)
    {
        ecx = rd32(ecx + 4u);
        goto L_100f20fa;
    }
    ecx = rd32(ecx + 4u);
L_100f210b: ;
    if (rd16(arg1 + 0x18u) >= 0x1eu)
    {
        edx = in_edx;
    }
    else
    {
        g->esp = sp0 - 8u;
        t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, in_edx, 1, 3, 0x1060u, in_edi, in_esi);
        t14 = g->edx;
        if (t13 == 0u)
        {
            eax = t13;
            edx = t14;
        }
        else
        {
            eax = t13;
            edx = t14;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t15 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
            t16 = g->ecx;
            t17 = g->edx;
            if (t15 == 0u)
            {
                eax = t15;
                edx = t17;
            }
            else
            {
                ecx = t16;
                edx = t17;
                edi = t15;
                wr16(arg1 + 8u, (uint16_t)(rd16(arg1 + 8u) + 1u));
                if (rd16(arg1 + 8u) == 0u)
                {
                    wr16(arg1 + 8u, 1u);
                }
                t18 = (ecx & 0xffff0000u) | rd16(arg1 + 8u);
                g->esp = sp0 - 0x10u;
                t19 = cow_thiscall(g, COW_IMG(0x100f3380u), edi, 2, arg1, t18);
                t20 = rd32(arg1 + 0x1cu);
                wr16(arg1 + 0x18u, (uint16_t)(rd16(arg1 + 0x18u) + 1u));
                wr32(edi + 4u, t20);
                wr32(arg1 + 0x1cu, edi);
                eax = t19;
                edx = t20;
            }
        }
    }
L_100f2159: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100f2160: ;
    wr16(arg1 + 8u, (uint16_t)(rd16(arg1 + 8u) + 1u));
    if (rd16(arg1 + 8u) == 0u)
    {
        wr16(arg1 + 8u, 1u);
    }
    t10 = (eax & 0xffff0000u) | rd16(arg1 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x100f3380u), ecx, 2, arg1, t10);
    t12 = g->edx;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f2020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f2020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
