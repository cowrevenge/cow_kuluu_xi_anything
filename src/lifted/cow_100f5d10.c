/* f_0x100f5d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f5d10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_50;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    if (arg2 == 0u)
    {
        wr32(sp0 - 0x64u, 0u);
        wr32(sp0 - 0x68u, 0x200u);
        wr32(sp0 - 0x6cu, arg1 + 0xc48u);
        edi = arg1 + 0xc48u;
        eax = 0u;
        ecx = 0x80u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x70u, 7u);
        g->ecx = ecx;
        g->edx = arg1 + 0xc48u;
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 7u, arg1 + 0xc48u, 0x200u, 0u);
        t1 = g->ecx;
        t2 = g->edx;
        g->ecx = t1;
        g->edx = t2;
        t3 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
        t4 = g->ecx;
        t5 = g->edx;
        if ((int16_t)t3 <= 0) goto L_100f5d6f;
        ecx = t4;
        edx = t5;
        esi = 0u;
        edi = t3;
L_100f5d53: ;
        wr32(sp0 - 0x64u, esi);
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x100e6c40u), ecx, 1, esi);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            ecx = t7;
            edx = t8;
        }
        else
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            wr32(sp0 - 0x64u, eax);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            cow_cdecl(g, COW_IMG(0x100e63c0u), 1, eax);
            t9 = g->ecx;
            t10 = g->edx;
            ecx = t9;
            edx = t10;
        }
        if ((int16_t)(esi + 1u) < (int16_t)edi)
        {
            esi = esi + 1u;
            goto L_100f5d53;
        }
    }
L_100f5d6f: ;
    wr32(sp0 - 0x50u, 0xau);
    loc_50 = 0xau;
L_100f5d77: ;
    wr32(sp0 - 0x64u, arg1 + 8u);
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    wr32(sp0 - 0x6cu, arg2);
    g->edx = sp0 - 0x4cu;
    g->esp = sp0 - 0x60u;
    t11 = cow_thiscall(g, COW_IMG(0x100f42d0u), arg1, 3, arg2, sp0 - 0x4cu, arg1 + 8u);
    t12 = g->edx;
    if (t11 != 0x18u)
    {
        eax = t11;
        edx = t12;
        goto L_100f5e33;
    }
    eax = t11;
    t13 = rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x64u, t13);
    wr32(sp0 - 0x68u, sp0 - 0x48u);
    g->eax = eax;
    g->ecx = t13;
    g->edx = sp0 - 0x48u;
    g->esp = sp0 - 0x60u;
    t14 = cow_cdecl(g, COW_IMG(0x1031046fu), 2, sp0 - 0x48u, t13);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        edx = t16;
    }
    else
    {
        ecx = t15;
        edx = t16;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t17 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
        t18 = g->ecx;
        t19 = g->edx;
        if ((int16_t)t17 <= 0)
        {
            edx = t19;
            goto L_100f5e1d;
        }
        ecx = t18;
        edx = t19;
        ebx = 0u;
        ebp = t17;
L_100f5dbb: ;
        wr32(sp0 - 0x64u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t20 = cow_thiscall_cdecl(g, COW_IMG(0x100e6c40u), ecx, 1, ebx);
        t21 = g->ecx;
        t22 = g->edx;
        if (t20 == 0u)
        {
            ecx = t21;
            edx = t22;
        }
        else
        {
            edx = t22;
            esi = t20;
            if (rd32(esi) != rd32(sp0 - 0x48u))
            {
                ecx = rd32(sp0 - 0x48u);
            }
            else
            {
                if (rd32(esi + 4u) != rd32(sp0 - 0x44u))
                {
                    ecx = rd32(esi + 4u);
                }
                else
                {
                    if (!(rd32(esi + 0x98u) & 1u))
                    {
                        ecx = rd32(esi + 0x9cu);
                        edx = 0u;
                    }
                    else
                    {
                        ecx = rd32(esi + 0x9cu);
                        if ((ecx >> 0xdu & 0x3fu) != (uint8_t)rd32(sp0 - 0xcu))
                        {
                            ecx = ecx >> 0xdu & 0x3fu;
                            edx = (uint32_t)((int32_t)(uint8_t)rd32(sp0 - 0xcu) >> 0x1fu);
                        }
                        else
                        {
                            eax = (uint8_t)rd32(sp0 - 0xcu);
                            ecx = ecx >> 0xdu & 0x3fu;
                            edx = (uint32_t)((int32_t)(uint8_t)rd32(sp0 - 0xcu) >> 0x1fu);
                            if (0u == edx)
                            {
                                wr32(sp0 - 0x64u, esi);
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x60u;
                                cow_cdecl(g, COW_IMG(0x100e63b0u), 1, esi);
                                t23 = g->ecx;
                                t24 = g->edx;
                                ecx = t23;
                                edx = t24;
                            }
                        }
                    }
                }
            }
        }
        if ((int16_t)(ebx + 1u) < (int16_t)ebp)
        {
            ebx = ebx + 1u;
            goto L_100f5dbb;
        }
    }
L_100f5e1d: ;
    t25 = rd32(sp0 - 0x50u) - 1u;
    wr32(sp0 - 0x50u, t25);
    if ((int32_t)(rd32(sp0 - 0x50u) - 1u) > 0)
    {
        loc_50 = t25;
        goto L_100f5d77;
    }
    eax = 0x16u;
L_100f5e33: ;
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x58u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f5d10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
