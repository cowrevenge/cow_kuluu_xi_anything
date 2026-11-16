/* f_0x100f5250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f5250(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 > 3u) goto L_100f539a;
    t1 = rd32(COW_IMG(0x100f53a4u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f5266u: goto L_100f5266;
    case 0x100f526eu: goto L_100f526e;
    case 0x100f529au: goto L_100f529a;
    case 0x100f5377u: goto L_100f5377;
    default: rt_fatal(g, COW_IMG(0x100f525fu), "switch");
    }
    return 0;
L_100f5266: ;
    return 3u;
L_100f526e: ;
    t18 = rd32(rd32(sp0 + 4u) + 0xa4u);
    t19 = rd32(rd32(sp0 + 4u) + 0xa0u);
    t20 = rd32(sp0 + 4u);
    wr8(t20 + 0xc7u, 1u);
    g->eax = t18;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t21 = cow_cdecl(g, COW_IMG(0x103103bfu), 2, t19, t18);
    t22 = g->edx;
    wr32(t20 + 0xcu, t21);
    g->edx = t22;
    return 0x16u;
L_100f529a: ;
    if ((int32_t)rd32(rd32(sp0 + 4u) + 0xcu) >= 0)
    {
        eax = rd32(rd32(sp0 + 4u) + 0xcu);
        ebp = rd32(sp0 + 4u);
        goto L_100f52d1;
    }
    eax = rd32(rd32(sp0 + 4u) + 0xcu);
    ebp = rd32(sp0 + 4u);
    wr16(ebp + 0x10u, (uint16_t)(rd16(ebp + 0x10u) + 1u));
    if (rd16(ebp + 0x10u) > 0x3cu)
    {
        edx = in_edx;
        goto L_100f52e8;
    }
    t3 = rd32(ebp + 0xa4u);
    t4 = rd32(ebp + 0xa0u);
    g->eax = t4;
    g->edx = t3;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x103103bfu), 2, t4, t3);
    t6 = g->edx;
    wr32(ebp + 0xcu, t5);
    g->edx = t6;
    return 0x16u;
L_100f52d1: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x103103cau), 1, eax);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        sf = (int32_t)t7 < 0;
        goto L_100f52e6;
    }
    edx = t9;
    g->edx = edx;
    return 0x16u;
L_100f52e6: ;
    if (!sf) goto L_100f52fa;
L_100f52e8: ;
    if (eax != 0xffffeb32u)
    {
        wr32(ebp + 8u, eax);
    }
    g->edx = edx;
    return 5u;
L_100f52fa: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 + 4u, t10);
    if ((int16_t)t10 <= 0)
    {
        edx = t12;
    }
    else
    {
        ecx = t11;
        edx = t12;
        ebx = 0u;
L_100f530c: ;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t13 = cow_thiscall_cdecl(g, COW_IMG(0x100e6c40u), ecx, 1, ebx);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 == 0u)
        {
            ecx = t14;
            edx = t15;
        }
        else
        {
            edx = t15;
            esi = t13;
            if (rd32(esi) != rd32(rd32(ebp + 0xa0u)))
            {
                ecx = rd32(esi);
            }
            else
            {
                ecx = rd32(esi);
                edi = rd32(ebp + 0xa0u);
                if (rd32(esi + 4u) != rd32(edi + 4u))
                {
                    edx = rd32(esi + 4u);
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
                        if ((ecx >> 0xdu & 0x3fu) != rd8(edi + 0x3cu))
                        {
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
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                cow_cdecl(g, COW_IMG(0x100e63b0u), 1, esi);
                                t16 = g->ecx;
                                t17 = g->edx;
                                ecx = t16;
                                edx = t17;
                            }
                        }
                    }
                }
            }
        }
        if ((int16_t)(ebx + 1u) < (int16_t)rd16(sp0 + 4u))
        {
            ebx = ebx + 1u;
            goto L_100f530c;
        }
    }
    g->edx = edx;
    return 0x17u;
L_100f5377: ;
    if ((int32_t)rd32(rd32(sp0 + 4u) + 0xcu) < 0)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 0xcu);
        esi = rd32(sp0 + 4u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x103103d5u), 1, eax);
        t2 = g->edx;
        wr32(esi + 0xcu, 0xffffffffu);
        edx = t2;
    }
    g->edx = edx;
    return 6u;
L_100f539a: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f5250(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
