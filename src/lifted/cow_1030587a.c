/* f_0x1030587a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1030587a(Guest* g)
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
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 0x10u));
    if ((int32_t)rd32(arg1 + 0x110u) <= 0)
    {
        eax = arg1;
        edx = in_edx;
    }
    else
    {
        loc_18 = t1;
        eax = arg3;
        loc_8 = 0u;
        loc_10 = arg3;
L_103058a5: ;
        wr32(sp0 + 0x10u, 0u);
L_103058a9: ;
        if (rd32(sp0 + 0x10u) != 0u)
        {
            edx = rd32(eax);
            edi = rd32(eax + 4u);
        }
        else
        {
            edx = rd32(eax);
            edi = rd32(eax - 4u);
        }
        t2 = rd8(edi + 1u);
        t3 = rd8(edx + 1u);
        t4 = rd8(edi);
        t5 = rd8(edx);
        t6 = rd32(loc_18 + loc_8 * 4u);
        wr8(t6, (uint8_t)(uint32_t)((int32_t)(t4 * 4u + t5 * 0xcu + 8u) >> 4u));
        wr8(t6 + 1u, (uint8_t)(uint32_t)((int32_t)(t2 + t3 * 3u + t4 * 3u + t5 * 9u + 7u) >> 4u));
        t7 = t2 + t3 * 3u;
        if (rd32(arg2 + 0x28u) == 2u)
        {
            eax = t7;
            ecx = t4 + t5 * 3u;
            esi = t6 + 2u;
            loc_8 = loc_8 + 1u;
        }
        else
        {
            ecx = t4 + t5 * 3u;
            edx = edx + 2u;
            ebx = rd32(arg2 + 0x28u) - 2u;
            esi = t6 + 2u;
            edi = edi + 2u;
            loc_8 = loc_8 + 1u;
            loc_c = t7;
            loc_14 = ebx;
L_10305909: ;
            t8 = rd8(edi);
            t9 = rd8(edx);
            wr8(esi, (uint8_t)(uint32_t)((int32_t)(ecx + loc_c * 3u + 8u) >> 4u));
            wr8(esi + 1u, (uint8_t)(uint32_t)((int32_t)(loc_c * 3u + t8 + t9 * 3u + 7u) >> 4u));
            t10 = t8 + t9 * 3u;
            if (loc_14 != 1u)
            {
                ecx = loc_c;
                edx = edx + 1u;
                esi = esi + 2u;
                edi = edi + 1u;
                loc_c = t10;
                loc_14 = loc_14 - 1u;
                goto L_10305909;
            }
            eax = t10;
            ecx = loc_c;
            esi = esi + 2u;
        }
        wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) + 1u);
        t11 = rd32(sp0 + 0x10u);
        wr8(esi, (uint8_t)(uint32_t)((int32_t)(eax * 3u + ecx + 8u) >> 4u));
        wr8(esi + 1u, (uint8_t)(uint32_t)((int32_t)(eax * 4u + 7u) >> 4u));
        if ((int32_t)t11 < 2)
        {
            eax = loc_10;
            goto L_103058a9;
        }
        eax = loc_10;
        if ((int32_t)loc_8 < (int32_t)rd32(arg1 + 0x110u))
        {
            loc_10 = eax + 4u;
            eax = eax + 4u;
            goto L_103058a5;
        }
        eax = eax + 4u;
        edx = loc_8;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030587a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030587a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
