/* f_0x102b4090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102b4090(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)rdf32(sp0 + 0x18u);
    if (d1 < (double)rdf32(COW_IMG(0x1032a42cu)))
    {
        wr32(sp0 + 0x18u, 0x358637bdu);
    }
    t2 = rd32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t3 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t2, 4u, COW_IMG(0x103bfebcu), 0x57u, in_edi);
    t4 = g->edx;
    wr32(arg5, t3);
    g->ecx = arg5;
    g->esp = sp0 - 0x34u;
    t5 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t2, 4u, COW_IMG(0x103bfebcu), 0x58u, t2);
    t6 = g->ecx;
    if ((int32_t)t2 <= 0)
    {
        ecx = t6;
        ebx = t2;
        ebp = t5;
        loc_4 = t5;
    }
    else
    {
        ebx = t2;
        ebp = t5;
        loc_4 = t5;
        edi = ebp;
        eax = 0xffu;
        ecx = ebx;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    wr32(sp0 + 8u, 0u);
    if ((int32_t)ebx <= 0)
    {
        loc_10 = 0u;
    }
    else
    {
        eax = 0u;
        esi = 1u;
        loc_10 = 0u;
        loc_8 = 1u;
        loc_c = 0u;
        loc_18 = arg1;
L_102b4119: ;
        if (rd32(eax + ebp) != 0u)
        {
            t7 = rd32(sp0 + 8u);
            wr32(eax + rd32(arg5), t7);
            if ((int32_t)esi < (int32_t)ebx)
            {
                loc_14 = loc_18 + 0xcu;
L_102b413b: ;
                if (rd32(ebp + esi * 4u) != 0u)
                {
                    t8 = rd32(sp0 + 0x18u);
                    g->esp = sp0 - 0x20u;
                    t9 = cow_call_regs(g, COW_IMG(0x102b43d0u), t8, loc_14, g->edx, 1, 5, loc_18, loc_14, t8, in_edi, in_esi);
                    if ((uint8_t)t9 != 0u)
                    {
                        t10 = rd32(sp0 + 8u);
                        wr32(esi * 4u + rd32(arg5), t10);
                        wr32(ebp + esi * 4u, 0u);
                        loc_10 = loc_10 + 1u;
                    }
                }
                if ((int32_t)(esi + 1u) < (int32_t)ebx)
                {
                    esi = esi + 1u;
                    loc_14 = loc_14 + 0xcu;
                    goto L_102b413b;
                }
                eax = loc_c;
                esi = loc_8;
            }
            wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
        }
        if ((int32_t)esi < (int32_t)ebx)
        {
            loc_8 = esi + 1u;
            esi = esi + 1u;
            loc_c = eax + 4u;
            eax = eax + 4u;
            loc_18 = loc_18 + 0xcu;
            goto L_102b4119;
        }
        ecx = esi;
    }
    wr32(arg4, ebx - loc_10);
    g->edx = arg4;
    g->esp = sp0 - 0x24u;
    t11 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, ebx - loc_10, 0xcu, COW_IMG(0x103bfebcu), 0x79u, in_edi);
    t12 = g->edx;
    wr32(arg3, t11);
    if ((int32_t)ebx <= 0)
    {
        ecx = arg3;
        edx = t12;
    }
    else
    {
        ecx = arg3;
        ebp = 0u;
        esi = 0u;
        edi = arg1;
L_102b41eb: ;
        if (rd32(esi * 4u + loc_4) == 0u)
        {
            edx = loc_4;
        }
        else
        {
            edx = loc_4;
            t13 = ebp + rd32(arg3);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            cow_cdecl(g, COW_IMG(0x10274670u), 2, t13, edi);
            t14 = g->ecx;
            t15 = g->edx;
            ecx = t14;
            edx = t15;
            ebp = ebp + 0xcu;
        }
        if ((int32_t)(esi + 1u) < (int32_t)ebx)
        {
            esi = esi + 1u;
            edi = edi + 0xcu;
            goto L_102b41eb;
        }
        ebp = loc_4;
    }
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bfebcu), 0x86u);
    t16 = g->edx;
    g->edx = t16;
    g->esp = sp0 - 0x34u;
    t17 = cow_cdecl(g, COW_IMG(0x10276110u), 3, arg1, COW_IMG(0x103bfebcu), 0x87u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b4090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b4090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
