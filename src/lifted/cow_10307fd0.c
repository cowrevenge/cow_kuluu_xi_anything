/* f_0x10307fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10307fd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_30;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u) + 0x5cu);
    t2 = rd32(rd32(sp0 + 4u) + 0x64u);
    if ((int32_t)rd32(sp0 + 0x10u) <= 0)
    {
        eax = rd32(sp0 + 0x10u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(sp0 + 0x10u);
        ecx = t2;
        esi = rd32(rd32(sp0 + 4u) + 0x1a4u);
        loc_10 = t1;
        loc_c = t2;
        edx = in_edx;
        ebx = arg3;
        loc_18 = arg3;
        loc_1c = eax;
L_1030800a: ;
        g->edx = edx;
        t3 = rd32(ebx);
        g->esp = sp0 - 0x38u;
        cow_cdecl(g, COW_IMG(0x102f595eu), 3, t3, loc_10, in_edi);
        t4 = g->edx;
        t5 = rd32(esi + 0x30u);
        wr32(sp0 + 4u, 0u);
        if ((int32_t)loc_c <= 0)
        {
            eax = t5;
            ecx = loc_10;
            edx = t4;
        }
        else
        {
            eax = t5;
            loc_30 = t5;
            t6 = arg2 + ebx - arg3;
            loc_24 = eax << 6u;
            loc_20 = t6;
            loc_8 = esi + 0x34u;
L_10308037: ;
            t7 = rd32(loc_20);
            t8 = rd32(sp0 + 4u);
            t9 = rd32(esi + 0x18u);
            wr32(sp0 + 0x10u, 0u);
            t10 = rd32(t8 * 4u + t9);
            if (loc_10 == 0u)
            {
                ecx = loc_24 + rd32(loc_8);
                edx = loc_10;
            }
            else
            {
                eax = t7 + t8;
                ecx = loc_24 + rd32(loc_8);
                edx = loc_10;
                edi = rd32(ebx);
                loc_28 = t10;
                loc_14 = edx;
L_10308062: ;
                wr8(edi, (uint8_t)(rd8(edi) + rd8(loc_28 + rd8(eax) + rd32(ecx + rd32(sp0 + 0x10u) * 4u))));
                t11 = rd32(sp0 + 0x10u) + 1u & 0xfu;
                wr32(sp0 + 0x10u, t11);
                if (loc_14 != 1u)
                {
                    eax = eax + loc_c;
                    edi = edi + 1u;
                    loc_14 = loc_14 - 1u;
                    goto L_10308062;
                }
                edx = t11;
                ebx = loc_18;
            }
            wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
            if ((int32_t)rd32(sp0 + 4u) < (int32_t)loc_c)
            {
                loc_8 = loc_8 + 4u;
                goto L_10308037;
            }
            eax = loc_30;
        }
        t12 = eax + 1u & 0xfu;
        wr32(esi + 0x30u, t12);
        if (loc_1c != 1u)
        {
            eax = t12;
            loc_18 = ebx + 4u;
            ebx = ebx + 4u;
            loc_1c = loc_1c - 1u;
            goto L_1030800a;
        }
        eax = t12;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10307fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
