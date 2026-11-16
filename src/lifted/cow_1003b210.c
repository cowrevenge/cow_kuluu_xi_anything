/* f_0x1003b210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_1003b210(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    int64_t q1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    q1 = (uint64_t)cow_mulu(0x10624dd3u, arg1 + 0x7cfu);
    if ((uint8_t)arg6 != 0u)
    {
        esi = (cow_qhi(q1) >> 7u) * 0x7d0u;
        goto L_1003b308;
    }
    esi = (cow_qhi(q1) >> 7u) * 0x7d0u;
    t2 = rd32(rd32(COW_IMG(0x1047b978u)) + 8u);
    if (t2 == 0u)
    {
        ecx = t2;
        ebp = 0u;
        goto L_1003b2a5;
    }
    eax = t2;
    ecx = t2;
    ebp = 0u;
L_1003b262: ;
    if (rd32(eax + 0x10u) != arg2)
    {
        edi = rd32(eax + 8u);
        goto L_1003b29b;
    }
    edi = rd32(eax + 8u);
    if (rd32(eax + 0x18u) != arg4) goto L_1003b29b;
    if (rd32(eax + 0x14u) != arg3) goto L_1003b29b;
    if (rd32(eax + 4u) != 0u) goto L_1003b29b;
    if (rd32(eax + 0xcu) == esi) goto L_1003b2a3;
    edx = rd32(eax + 0xcu);
    cf = rd32(eax + 0xcu) < esi;
    if (!cf)
    {
        if (ebp == 0u) goto L_1003b299;
        if (rd32(ebp + 0xcu) <= edx) goto L_1003b29b;
L_1003b299: ;
        ebp = eax;
    }
L_1003b29b: ;
    if (edi != 0u)
    {
        eax = edi;
        goto L_1003b262;
    }
L_1003b2a5: ;
    if (ecx != 0u)
    {
L_1003b2ae: ;
        if (ebp == ecx)
        {
            edi = rd32(ecx + 8u);
        }
        else
        {
            edi = rd32(ecx + 8u);
            if (rd32(ecx + 4u) != 0u)
            {
                eax = rd32(ecx + 4u);
                if ((int32_t)eax < 3)
                {
                    wr32(ecx + 4u, eax - 1u);
                }
            }
            else
            {
                if ((int32_t)rd32(self + 4u) > 300)
                {
                    g->esp = sp0 - 0x18u;
                    cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
                    wr32(self + 4u, rd32(self + 4u) - 1u);
                }
            }
        }
        if (edi != 0u)
        {
            ecx = edi;
            goto L_1003b2ae;
        }
    }
    if (ebp == 0u) goto L_1003b308;
    t3 = rd32(ebp + 0x1cu);
    wr32(ebp + 4u, 3u);
    wr32(arg5, t3);
    return 0u;
L_1003b2a3: ;
    ebp = eax;
    goto L_1003b2a5;
L_1003b308: ;
    if (rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu) == 0u)
    {
        loc_4 = 0xffffffffu;
        goto L_1003b3a6;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = eax;
    g->edx = arg2;
    t4 = rd32(eax);
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, rd32(t4 + 0x5cu), t4, 6, eax, esi, arg2, arg3, arg4, arg5);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 < 0)
    {
        loc_4 = t5;
        goto L_1003b3a6;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    loc_4 = t5;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t8 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x20u);
    if (t8 == 0u) goto L_1003b39e;
    eax = t8;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, COW_IMG(0x1003b450u), eax, 5, esi, arg2, arg3, arg4, rd32(arg5));
    t10 = g->ecx;
    if (t9 == 0u) goto L_1003b39e;
    eax = t9;
    ecx = t10;
    if ((uint8_t)arg6 == 0u) goto L_1003b381;
    wr32(eax + 4u, 4u);
    return loc_4;
L_1003b381: ;
    t11 = rd32(self + 4u) + 1u;
    t12 = rd32(self + 8u);
    wr32(self + 4u, t11);
    wr32(self + 8u, esi + t12);
    return loc_4;
L_1003b39e: ;
    loc_4 = 0xffffffffu;
L_1003b3a6: ;
    return loc_4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003b210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003b210(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
