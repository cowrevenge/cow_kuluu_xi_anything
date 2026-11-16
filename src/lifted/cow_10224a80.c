/* f_0x10224a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_10224a80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x1066714cu)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        edi = rd32(COW_IMG(0x1066714cu));
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x10224120u), arg1, 1, arg5);
        t2 = g->edx;
        if ((int32_t)t1 < 0)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            edx = t2;
            esi = t1;
            g->ecx = esi * 0x30u;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 2u);
            t4 = g->ecx;
            t5 = g->edx;
            if (arg6 == t3)
            {
                edx = t5;
                ebx = arg6;
                edi = edi + esi * 0x30u;
            }
            else
            {
                ecx = t4;
                edx = t5;
                edi = edi + esi * 0x30u;
                if (rd32(arg1 + 0x64u) != 4u)
                {
                    eax = rd32(arg1 + 0x64u);
                    goto L_10224ad2;
                }
                loc_14 = 0u;
L_10224ae2: ;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, loc_14);
                t10 = g->edx;
                edx = t10;
                ebx = t9;
            }
L_10224aec: ;
            if (rd32(arg1 + 0x30u) == arg5)
            {
                eax = arg5;
                ecx = rd32(arg1 + 0x30u);
            }
            else
            {
                ecx = rd32(arg1 + 0x30u);
                if (rd32(arg1 + 0x68u) != 2u)
                {
                    eax = arg5;
                }
                else
                {
                    if (rd32(arg1 + 0x6cu) != arg5)
                    {
                        eax = arg5;
                    }
                    else
                    {
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t11 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 3u);
                        t12 = g->ecx;
                        t13 = g->edx;
                        eax = t11;
                        ecx = t12;
                        edx = t13;
                        ebx = t11;
                    }
                }
            }
            g->esp = sp0 - 0x1cu;
            t14 = cow_call_regs(g, COW_IMG(0x10223930u), eax, ecx, edx, 1, 0);
            t15 = g->edx;
            g->ebx = ebx;
            g->ecx = t14;
            g->esp = sp0 - 0x18u;
            t16 = cow_stdcall(g, COW_IMG(0x10223b10u), 1, esi);
            t17 = g->ecx;
            g->edx = arg3 + 0x12u;
            cow_cdecl(g, COW_IMG(0x10129f00u), 3, arg3 + 0x12u, arg4, t16);
            t18 = g->edx;
            t19 = rd16(edi + 4u);
            t20 = rd8(edi + 3u);
            g->eax = t19;
            g->edx = t18;
            g->esp = sp0 - 0x24u;
            t21 = cow_cdecl(g, COW_IMG(0x10220d40u), 2, t20, t19);
            t22 = g->edx;
            if (t21 == 0u)
            {
                eax = t21;
                edx = t22;
            }
            else
            {
                eax = t21;
                edx = t22;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t23 = cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, arg3, arg4, 0x80808080u, 0u, 0u);
                t24 = g->edx;
                eax = t23;
                edx = t24;
            }
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_10224ad2: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x10224b70u), ecx, 2, esi, eax);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        edx = t8;
        ebx = arg6;
        goto L_10224aec;
    }
    ecx = t7;
    edx = t8;
    loc_14 = 1u;
    goto L_10224ae2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10224a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10224a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
